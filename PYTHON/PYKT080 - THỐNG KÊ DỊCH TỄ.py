n, m = [int(x) for x in input().split()]
arr, q, b = [[0]] * n, [], [[-1, -1], [-1, 0], [-1, 1], [0, -1], [0, 1], [1, -1], [1, 0], [1, 1]]
for i in range(n):
    arr[i] = [int(x) for x in input().split()]
    for j in range(m):
        if arr[i][j] == -1:
            q.append([i, j])
total_ans = 0
while len(q) > 0:
    u = q.pop(0)
    for i in b:
        x, y = u[0] + i[0], u[1] + i[1]
        if 0 <= x < n and 0 <= y < m:
            total_ans += arr[x][y]
            arr[x][y] = 0
print(total_ans)