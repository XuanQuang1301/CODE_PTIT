import json
with open("tips.json", "r") as f:
    data = json.load(f)
tips = data["tips"]
value = {}
for data in tips:
    total = float(data["total_bill"])
    day = data["day"]
    size = int(data["size"])
    key = (day, size)
    if key not in value:
        value[key] = []
    value[key].append(total)
for case in range(int(input())):
    day, size = map(str, input().split())
    size = int(size)
    key = (day, size)
    if key not in value:
        print('INVALID')
        continue
    print(f"{sum(value[key]):.4f}")