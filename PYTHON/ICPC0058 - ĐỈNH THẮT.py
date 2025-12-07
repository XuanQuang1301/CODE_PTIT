def Try(n, k, u, v, ke):
    visited = [False] * (n + 1)
    q = [u]
    while len(q) > 0:
        x = q.pop()
        if x == v: return False
        for j in ke[x]:
            if j != k and visited[j] == False:
                q.append(j)
                visited[j] = True
    return True
for case in range(int(input())):
    n, m, u, v = [int(i) for i in input().split()]
    ke = [[] for _ in range(n + 1)]
    for i in range(0, m):
        x, y = [int(x) for x in input().split()]
        ke[x].append(y)
    count = 0
    for i in range(1, n + 1):
        if i != u and i != v:
            if Try(n, i, u, v, ke): count += 1
    print(count)