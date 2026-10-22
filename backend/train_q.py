import random
from policy import QAgent, LEVELS, apply_action

class SimUser:
    """Toy user: engagement is highest at a hidden preferred level; long stretches at High wear off."""
    def __init__(self):
        self.pref = random.randint(0, 2)
        self.at_high = 0

    def step(self, level_idx):
        engagement = 1.0 - 0.35 * abs(level_idx - self.pref)
        self.at_high = self.at_high + 1 if level_idx == 2 else 0
        if self.at_high >= 3:
            engagement -= 0.15
        engagement += random.gauss(0, 0.08)
        if engagement < 0.6:
            label = "overloaded" if level_idx > self.pref else "disengaged"
        elif engagement < 0.75:
            label = "stagnant"
        else:
            label = "good"
        return label, engagement

agent = QAgent()
EPISODES = 20000
for ep in range(EPISODES):
    user = SimUser()
    level = LEVELS[random.randint(0, 2)]
    label, _ = user.step(LEVELS.index(level))
    eps = max(0.05, 0.5 * (1 - ep / (EPISODES * 0.75)))
    for _ in range(5):  # five decisions per block
        action = agent.choose(label, level, eps)
        new_level = apply_action(level, action)
        next_label, eng = user.step(LEVELS.index(new_level))
        reward = eng - (0.03 if action != "hold" else 0.0)
        agent.update(label, level, action, reward, next_label, new_level)
        level, label = new_level, next_label

agent.save("qtable.json")
print("Learned policy (state | level -> action):")
for lab in ["disengaged", "overloaded", "stagnant", "good"]:
    for lev in LEVELS:
        print(f"  {lab:11s} | {lev:6s} -> {agent.best(lab, lev)}")