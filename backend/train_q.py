import random

from policy import (DOMINANT, ELEMENTS, LABELS, WEIGHTS, N_ACTIONS, QAgent, action_name,
                    apply_action, legal_actions, state_key)


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


agent = QAgent()
EPISODES = 60000
for ep in range(EPISODES):
    user = SimUser()
    levels = {e: random.randint(0, 2) for e in ELEMENTS}
    eng = user.engagement(levels)
    label = user.label(levels, eng)
    eps = max(0.05, 0.6 * (1 - ep / (EPISODES * 0.7)))
    steps = 0
    while label is not None and steps < 8:
        key = state_key(label, user.dom, levels)
        legal = legal_actions(levels)
        action = agent.choose(key, legal, eps)
        new_levels = apply_action(levels, action)
        new_eng = user.engagement(new_levels)
        new_label = user.label(new_levels, new_eng)
        reward = (new_eng - eng) - (0.02 if action != 0 else 0.0)
        if new_label is None:
            reward += 0.3
        next_key = state_key(new_label, user.dom, new_levels) if new_label else None
        agent.update(key, action, reward, next_key, legal_actions(new_levels) if new_label else None)
        levels, eng, label = new_levels, new_eng, new_label
        steps += 1

agent.save("qtable.json")
print("Top actions per state (label | dominant type | mean-level bucket):")
for lab in LABELS:
    for dom in DOMINANT:
        for bucket in ["lo", "mid", "hi"]:
            key = f"{lab}|{dom}|{bucket}"
            if key not in agent.q:
                continue
            row = agent.q[key]
            top = sorted(range(N_ACTIONS), key=lambda a: row[a], reverse=True)[:2]
            print(f"  {key:38s} -> " + ", ".join(f"{action_name(a)} ({row[a]:.2f})" for a in top))