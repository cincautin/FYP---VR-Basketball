import json
import random

LEVELS = ["Low", "Medium", "High"]
ACTIONS = ["down", "hold", "up"]


def classify(w, prev_acc):
    """Label the user's state from the last 30 s window (placeholder rules, tune later)."""
    if w["throws"] < 5:
        return "low_data"
    if w["secondsSinceLastThrow"] > 15:
        return "disengaged"
    if w["accuracy"] < 0.25:
        return "overloaded"
    if prev_acc is not None and abs(w["accuracy"] - prev_acc) < 0.05:
        return "stagnant"
    return "good"


def apply_action(level, action):
    i = LEVELS.index(level)
    if action == "up":
        i = min(2, i + 1)
    elif action == "down":
        i = max(0, i - 1)
    return LEVELS[i]


def rules_action(label):
    return {"disengaged": "up", "overloaded": "down"}.get(label, "hold")


class QAgent:
    def __init__(self, alpha=0.2, gamma=0.8):
        self.q = {}
        self.alpha = alpha
        self.gamma = gamma

    @staticmethod
    def key(label, level):
        return f"{label}|{level}"

    def values(self, label, level):
        return self.q.setdefault(self.key(label, level), [0.0, 0.0, 0.0])

    @staticmethod
    def legal(level):
        i = LEVELS.index(level)
        acts = ["hold"]
        if i > 0:
            acts.append("down")
        if i < 2:
            acts.append("up")
        return acts

    def best(self, label, level):
        vals = self.values(label, level)
        return max(self.legal(level), key=lambda a: (vals[ACTIONS.index(a)], a == "hold"))

    def choose(self, label, level, epsilon):
        if random.random() < epsilon:
            return random.choice(self.legal(level))
        return self.best(label, level)

    def update(self, label, level, action, reward, next_label, next_level):
        vals = self.values(label, level)
        a = ACTIONS.index(action)
        nxt = max(self.values(next_label, next_level)[ACTIONS.index(x)] for x in self.legal(next_level))
        vals[a] = (1 - self.alpha) * vals[a] + self.alpha * (reward + self.gamma * nxt)

    def save(self, path):
        with open(path, "w") as f:
            json.dump(self.q, f, indent=1)

    @classmethod
    def load(cls, path):
        agent = cls()
        with open(path) as f:
            agent.q = json.load(f)
        return agent