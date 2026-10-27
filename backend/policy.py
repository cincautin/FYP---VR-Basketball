import json
import random

ELEMENTS = ["Points", "Progress", "Badges", "PersonalBest", "Timer"]   # Choice never changes mid-block
LEVELS = ["Low", "Medium", "High"]
LABELS = ["disengaged", "overloaded", "stagnant"]
DOMINANT = ["Achiever", "Player", "Socialiser", "FreeSpirit", "Disruptor", "Philanthropist"]

# Same numbers as HexadWeights.cs
WEIGHTS = {
    "Points":       {"Achiever": 0, "Player": 2, "Socialiser": -1, "FreeSpirit": 0, "Disruptor": 0, "Philanthropist": -1},
    "Progress":     {"Achiever": 1, "Player": 1, "Socialiser": -1, "FreeSpirit": 0, "Disruptor": 0, "Philanthropist": 0},
    "Badges":       {"Achiever": 1, "Player": 1, "Socialiser": -1, "FreeSpirit": -2, "Disruptor": 0, "Philanthropist": 2},
    "PersonalBest": {"Achiever": 1, "Player": 1, "Socialiser": 0, "FreeSpirit": 0, "Disruptor": 0, "Philanthropist": 0},
    "Timer":        {"Achiever": 2, "Player": 0, "Socialiser": 1, "FreeSpirit": 1, "Disruptor": 1, "Philanthropist": -2},
}

N_ACTIONS = 1 + 2 * len(ELEMENTS)   # 0 = hold, then (raise, lower) for each element


def encode(element, direction):
    i = ELEMENTS.index(element)
    return 1 + 2 * i if direction == "up" else 2 + 2 * i


def decode(action):
    if action == 0:
        return None, None
    i = (action - 1) // 2
    return ELEMENTS[i], ("up" if (action - 1) % 2 == 0 else "down")


def action_name(action):
    e, d = decode(action)
    return "hold" if e is None else f"{d} {e}"


def legal_actions(levels, recent_acc=1.0, timer_min_acc=0.4):
    """Mirrors Unity's guards: no step outside Low..High, and no Timer to High when accuracy is low."""
    acts = [0]
    for e in ELEMENTS:
        if levels[e] < 2:
            if e == "Timer" and levels[e] == 1 and recent_acc < timer_min_acc:
                continue
            acts.append(encode(e, "up"))
        if levels[e] > 0:
            acts.append(encode(e, "down"))
    return acts


def apply_action(levels, action):
    new = dict(levels)
    e, d = decode(action)
    if e is not None:
        new[e] += 1 if d == "up" else -1
    return new


def state_key(label, dominant, levels):
    mean = sum(levels.values()) / len(levels)
    bucket = "lo" if mean < 0.8 else ("mid" if mean < 1.3 else "hi")
    return f"{label}|{dominant}|{bucket}"


def rules_action(label, levels, affinities, legal):
    """Fallback used when the Q-table has no experience for a state."""
    def aff(e):
        return affinities.get(e, 0.0)

    if label == "disengaged":
        candidates = [encode(e, "up") for e in sorted(ELEMENTS, key=aff, reverse=True)]
    elif label == "overloaded":
        candidates = [encode(e, "down") for e in ["Timer", "Points", "Badges", "PersonalBest", "Progress"]]
    elif label == "stagnant":
        candidates = [encode(e, "up") for e in sorted(["Progress", "PersonalBest", "Badges", "Points"], key=aff, reverse=True)]
    else:
        candidates = []
    for a in candidates:
        if a in legal:
            return a
    return 0


class QAgent:
    def __init__(self, alpha=0.15, gamma=0.7):
        self.q = {}
        self.alpha = alpha
        self.gamma = gamma

    def row(self, key):
        return self.q.setdefault(key, [0.0] * N_ACTIONS)

    def trained(self, key):
        return key in self.q and any(abs(v) > 1e-9 for v in self.q[key])

    def best(self, key, legal):
        r = self.row(key)
        return max(legal, key=lambda a: (r[a], a == 0))

    def choose(self, key, legal, epsilon):
        if random.random() < epsilon:
            return random.choice(legal)
        return self.best(key, legal)

    def update(self, key, action, reward, next_key, next_legal):
        r = self.row(key)
        future = 0.0
        if next_key is not None:
            nr = self.row(next_key)
            future = max(nr[a] for a in next_legal)
        r[action] = (1 - self.alpha) * r[action] + self.alpha * (reward + self.gamma * future)

    def save(self, path):
        with open(path, "w") as f:
            json.dump(self.q, f)

    @classmethod
    def load(cls, path):
        agent = cls()
        with open(path) as f:
            agent.q = json.load(f)
        return agent