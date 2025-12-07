n = int(input())
lines = [input().rstrip() for _ in range(n)]
count = 0
topic = None
ans = []
for line in lines:
    if line.strip() == "":
        if topic is not None:
            ans.append((topic, count))
            topic = None
            count = 0
    elif topic is None:
            topic = line
            count = 0
    else:
        count += 1
if topic is not None:
    ans.append((topic, count))
for topic, count in ans:
    print(f"{topic}: {count}")