n, m = map(int, input().split())
arr, q, b = [[0] * m] * n, [], [[-1, -1], [-1, 0], [-1, 1], [0, -1], [0, 1], [1, -1], [1, 0], [1, 1]]
for i in range(n):
    arr[i] = [int(x) for x in input().split()]
    for j in range(m):
        if arr[i][j] == -1:
            q.append([i, j])
count = 0
while len(q) > 0:
    u = q.pop(0)
    for x in b:
        i = x[0] + u[0]
        j = x[1] + u[1]
        if 0 <= i < n and 0 <= j < m:
            count += arr[i][j]
            arr[i][j] = 0
print(count)
