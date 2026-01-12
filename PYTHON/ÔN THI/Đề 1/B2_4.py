
for case in range(int(input())):
    s = input()
    tmp = {}
    ans = 0
    for i in s:
        tmp[i] = s.count(i)
        ans = max(ans, tmp[i])
    for i in s:
        if tmp[i] == ans:
            print(i)
            break

from collections import Counter

for case in range(int(input())):
    s = input()
    c = Counter(s)
    ans = max(c.values())  # tần suất lớn nhất

    for ch in s:
        if c[ch] == ans:
            print(ch)
            break