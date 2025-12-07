def Try(n, m, x, ke, visited):
    visited[x] = True
    q = [x]
    while len(q) > 0:
        u = q.pop()
        for i in ke[u]:
            if visited[i] == False:
                visited[i] = True
                q.append(i)
n, m, u = [int(i) for i in input().split()]
ke = [[] for _ in range(n + 1)]
for j in range(m):
    x, y = [int(i) for i in input().split()]
    ke[x].append(y)
    ke[y].append(x)
visited = [False] * (n + 1)
Try(n, m, u, ke, visited)
count = False
for i in range(1, n + 1):
    if visited[i] == False:
        print(i)
        count = True
if not count:
    print(0)
