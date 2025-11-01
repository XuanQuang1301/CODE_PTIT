s = input()
ans = []
for i in range(0, len(s), 2):
    tmp = s[i:i + 2:1]
    if len(tmp) ==2: ans.append(int(s[i:i + 2:1]))
cnt = [0] * 100
for i in ans:
    cnt[i] += 1
for i in ans:
    if cnt[i] > 0:
        print(i, end = " ")
        cnt[i] = 0