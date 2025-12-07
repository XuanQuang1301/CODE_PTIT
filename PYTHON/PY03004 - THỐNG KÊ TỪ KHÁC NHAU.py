import re
a = {}
for case in range(int(input())):
    for line in re.split("[^a-z0-9]", input().lower()):
        if line != '':
            if a.get(line) is not None: a[line] += 1
            else: a[line] = 1
ans = sorted(a, key = lambda x : (-a[x], x))
for i in ans: print(i, a[i])
