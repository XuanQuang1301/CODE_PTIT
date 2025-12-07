

n = int(input())
ke = [[] for _ in range(n + 1)]

for i in range(n - 1):
    x, y = [int(x) for x in input().split()]
    ke[x].append(y)
    ke[y].append(x)
ok = False
for i in range(1, n + 1):
    if len(ke[i]) == n - 1:
        ok = True
if ok:
    print("Yes")
else:
    print("No")
