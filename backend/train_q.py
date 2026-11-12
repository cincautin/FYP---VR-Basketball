import csv
import json
import random
import sys

from policy import (DOMINANT, ELEMENTS, LABELS, WEIGHTS, N_ACTIONS, QAgent, action_name,
                    apply_action, legal_actions, state_key)

SEED = int(sys.argv[1]) if len(sys.argv) > 1 else 42   # python train_q.py 7  -> different run
EPISODES = 60000
CHECK_EVERY = 1000          # one row in training_log.csv per this many episodes
random.seed(SEED)


class SimUser:
    """Toy player: a hidden preferred level per element (from their dominant Hexad type, plus individual quirks)."""
    def __init__(self):
        self.dom = random.choice(DOMINANT)
        self.pref = {}
        for e in ELEMENTS:
            w = WEIGHTS[e][self.dom]
            base = 2 if w > 0 else (0 if w < 0 else 1)
            self.pref[e] = min(2, max(0, base + random.choice([-1, 0, 0, 1])))

    def engagement(self, levels):
        dist = sum(abs(levels[e] - self.pref[e]) for e in ELEMENTS) / (2.0 * len(ELEMENTS))
        return min(1.0, max(0.0, 0.95 - 1.1 * dist + random.gauss(0, 0.04)))

    def label(self, levels, eng):
        if eng >= 0.75:
            return None  # stable: no trigger
        if eng < 0.5:
            diff = sum(levels[e] - self.pref[e] for e in ELEMENTS)
            return "overloaded" if diff > 0 else "disengaged"
        return "stagnant"


def greedy_snapshot(agent, visits):
    """Best action per state, using only actions that have actually been tried."""
    snap = {}
    for key, row in agent.q.items():
        tried = [a for a in range(N_ACTIONS) if visits[key][a] > 0]
        if tried:
            snap[key] = max(tried, key=lambda a: (row[a], a == 0))
    return snap


def q_snapshot(agent):
    return {k: list(v) for k, v in agent.q.items()}


agent = QAgent()
visits = {}                 # state key -> visit count per action
log_rows = []
prev_policy, prev_q = {}, {}
blk_reward = blk_steps = blk_stable = blk_eps = 0

for ep in range(1, EPISODES + 1):
    user = SimUser()
    levels = {e: random.randint(0, 2) for e in ELEMENTS}
    recent_acc = random.uniform(0.2, 1.0)   # so the Timer-to-High guard applies in training, as on the server
    eng = user.engagement(levels)
    label = user.label(levels, eng)
    eps = max(0.05, 0.6 * (1 - ep / (EPISODES * 0.7)))
    agent.alpha = max(0.02, 0.15 * (1 - ep / EPISODES))   # learning rate decays so values settle
    steps, ep_reward = 0, 0.0
    while label is not None and steps < 8:
        key = state_key(label, user.dom, levels)
        legal = legal_actions(levels, recent_acc)
        action = agent.choose(key, legal, eps)
        new_levels = apply_action(levels, action)
        new_eng = user.engagement(new_levels)
        new_label = user.label(new_levels, new_eng)
        reward = (new_eng - eng) - (0.02 if action != 0 else 0.0)
        if new_label is None:
            reward += 0.3
        next_key = state_key(new_label, user.dom, new_levels) if new_label else None
        agent.update(key, action, reward, next_key, legal_actions(new_levels, recent_acc) if new_label else None)
        visits.setdefault(key, [0] * N_ACTIONS)[action] += 1
        ep_reward += reward
        levels, eng, label = new_levels, new_eng, new_label
        steps += 1

    blk_reward += ep_reward
    blk_steps += steps
    blk_stable += 1 if label is None else 0
    blk_eps += eps

    if ep % CHECK_EVERY == 0:
        policy = greedy_snapshot(agent, visits)
        shared = [k for k in policy if k in prev_policy]
        changed = sum(1 for k in shared if policy[k] != prev_policy[k])
        change_pct = round(100.0 * changed / len(shared), 1) if shared else ""
        q_now = q_snapshot(agent)
        max_dq = round(max((abs(q_now[k][a] - prev_q[k][a]) for k in prev_q for a in range(N_ACTIONS)), default=0.0), 4) if prev_q else ""
        log_rows.append({
            "episode": ep,
            "mean_reward": round(blk_reward / CHECK_EVERY, 4),
            "mean_steps": round(blk_steps / CHECK_EVERY, 3),
            "stable_rate": round(blk_stable / CHECK_EVERY, 3),   # share of episodes that ended in a stable state
            "epsilon": round(blk_eps / CHECK_EVERY, 3),
            "states_seen": len(policy),
            "policy_change_pct": change_pct,
            "max_q_change": max_dq,
        })
        prev_policy, prev_q = policy, q_now
        blk_reward = blk_steps = blk_stable = blk_eps = 0

agent.save("qtable.json")
with open("qtable_visits.json", "w") as f:
    json.dump(visits, f)
with open("training_log.csv", "w", newline="") as f:
    w = csv.DictWriter(f, fieldnames=list(log_rows[0].keys()))
    w.writeheader()
    w.writerows(log_rows)

print(f"seed {SEED} | saved qtable.json, qtable_visits.json, training_log.csv")
print("Top actions per state (label | dominant type | mean-level bucket), with visit counts:")
for lab in LABELS:
    for dom in DOMINANT:
        for bucket in ["lo", "mid", "hi"]:
            key = f"{lab}|{dom}|{bucket}"
            if key not in agent.q:
                continue
            row = agent.q[key]
            top = sorted(range(N_ACTIONS), key=lambda a: row[a], reverse=True)[:2]
            print(f"  {key:38s} n={sum(visits[key]):6d} -> " + ", ".join(f"{action_name(a)} ({row[a]:.2f})" for a in top))
