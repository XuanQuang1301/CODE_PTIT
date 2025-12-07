import re
a = {}
n, k = [int(x) for x in input().split()]
for case in range(n):
    for s in re.split("[^0-9a-z]", input().lower()):
        if s != '':
            if a.get(s) is not None: a[s] += 1
            else: a[s] = 1
ans = sorted(a, key = lambda x : (-a[x], x))
for i in ans:
    if a[i] >= k:
        print(i, a[i])
