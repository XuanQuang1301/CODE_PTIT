
def count_LT(n, adj, skip):
    visited = [False] * (n + 1)
    visited[skip] = True 
    count = 0
    
    for i in range(1, n + 1):
        if not visited[i]:
            count += 1
            # DFS
            q = []
            q.append(i)
            while len(q) > 0:
                u = q.pop()
                visited[u] = True
                for x in adj[u]: 
                    if not visited[x]:
                        q.append(x)
    return count

t = int(input().strip())
for _ in range(t):
    n, m = map(int, input().split())
    adj = []
    for i in range(n + 1): adj.append([])
    for _ in range(m):
        u, v = map(int, input().split())
        adj[u].append(v)
        adj[v].append(u)
    
    best_u = 0
    best_comp = 1
    for u in range(1, n + 1):
        comps = count_LT(n, adj, u)
        if comps > best_comp:
            best_comp = comps
            best_u = u
    
    print(best_u)
"""
2
5 5
1 2
1 3
2 3
3 4
3 5
5 7
1 2
1 3
2 3
2 5
3 4
3 5
4 5
"""