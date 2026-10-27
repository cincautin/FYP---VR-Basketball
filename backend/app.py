import json
import os
import time

from flask import Flask, jsonify, request

from policy import (ELEMENTS, LABELS, LEVELS, QAgent, action_name, decode, legal_actions,
                    rules_action, state_key)

app = Flask(__name__)
POLICY = os.environ.get("POLICY", "q" if os.path.exists("qtable.json") else "rules")
agent = QAgent.load("qtable.json") if POLICY == "q" else None
os.makedirs("logs", exist_ok=True)


@app.get("/health")
def health():
    return jsonify({"ok": True, "policy": POLICY})


@app.post("/window")
def window():
    started = time.time()
    data = request.get_json(force=True)
    label = data.get("stateLabel", "none")
    dominant = data.get("dominantType", "Achiever")
    recent_acc = float(data.get("recentAccuracy", 1.0))
    affinities = data.get("affinities", {})

    levels = {}
    for e in ELEMENTS:
        name = data.get("levels", {}).get(e)
        if name not in LEVELS:
            levels = None
            break
        levels[e] = LEVELS.index(name)

    resp = {"hasChange": False, "element": "", "newLevel": "", "state": label, "reason": "no_decision"}
    if levels is not None and label in LABELS:
        legal = legal_actions(levels, recent_acc)
        key = state_key(label, dominant, levels)
        if agent is not None and agent.trained(key):
            action, source = agent.best(key, legal), "q"
        else:
            action, source = rules_action(label, levels, affinities, legal), "rules"
        element, direction = decode(action)
        resp["reason"] = f"policy={source};key={key};action={action_name(action)}"
        if element is not None:
            step = 1 if direction == "up" else -1
            resp.update(hasChange=True, element=element, newLevel=LEVELS[levels[element] + step])

    with open("logs/requests.jsonl", "a") as f:
        f.write(json.dumps({"t": time.time(), "request": data, "response": resp,
                            "ms": round((time.time() - started) * 1000, 1)}) + "\n")
    print(f"trigger {data.get('triggerIndex')} | {data.get('participantId')} | {label} | {resp['reason']}")
    return jsonify(resp)


if __name__ == "__main__":
    app.run(host="0.0.0.0", port=5000)