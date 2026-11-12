import csv

import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt

rows = list(csv.DictReader(open("training_log.csv")))
ep = [int(r["episode"]) for r in rows]
reward = [float(r["mean_reward"]) for r in rows]
stable = [float(r["stable_rate"]) * 100 for r in rows]
chg = [(int(r["episode"]), float(r["policy_change_pct"])) for r in rows if r["policy_change_pct"] != ""]

fig, ax = plt.subplots(1, 3, figsize=(15, 4))
ax[0].plot(ep, reward); ax[0].set_title("Mean reward per episode"); ax[0].set_xlabel("Episode"); ax[0].set_ylabel("Reward")
ax[1].plot(ep, stable); ax[1].set_title("Episodes ending in a stable state"); ax[1].set_xlabel("Episode"); ax[1].set_ylabel("%")
ax[2].plot([c[0] for c in chg], [c[1] for c in chg]); ax[2].set_title("Policy stability"); ax[2].set_xlabel("Episode"); ax[2].set_ylabel("% of states whose best action changed")
for a in ax: a.grid(alpha=0.3)
plt.tight_layout(); plt.savefig("training_curves.png", dpi=200)
print("saved training_curves.png")
