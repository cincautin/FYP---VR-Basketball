import json
import os
import time

from flask import Flask, jsonify, request

from policy import LEVELS, QAgent, apply_action, classify, rules_action

app = Flask(__name__)
POLICY = os.environ.get("POLICY", "q" if os.path.exists("qtable.json") else "rules")
agent = QAgent.load("qtable.json") if POLICY == "q" else None
prev_accuracy = {}
os.makedirs("logs", exist_ok=True)


@app.get("/health")
def health():
    return jsonify({"ok": True, "policy": POLICY})


@app.post("/window")
def window():
    started = time.time()
    data = request.get_json(force=True)
    pid = str(data.get("participantId", "?"))
    w = data["window"]
    levels = data.get("levels", {})

    if data.get("tickIndex") == 1:
        prev_accuracy.pop(pid, None)  # new block
    label = classify(w, prev_accuracy.get(pid))
    prev_accuracy[pid] = w["accuracy"]

    level = levels.get("Points", "Off")
    action = "hold"
    if level in LEVELS and label != "low_data":
        action = agent.best(label, level) if agent else rules_action(label)
        if apply_action(level, action) == level:
            action = "hold"

    resp = {"hasChange": False, "element": "", "newLevel": "", "state": label,
            "reason": f"policy={POLICY};state={label};action={action}"}
    if action != "hold":
        resp.update({"hasChange": True, "element": "Points", "newLevel": apply_action(level, action)})

    with open("logs/requests.jsonl", "a") as f:
        f.write(json.dumps({"t": time.time(), "request": data, "response": resp,
                            "ms": round((time.time() - started) * 1000, 1)}) + "\n")
    print(f"tick {data.get('tickIndex')} | {pid} | {label} | Points={level} | {resp['reason']}")
    return jsonify(resp)


if __name__ == "__main__":
    app.run(host="0.0.0.0", port=5000)