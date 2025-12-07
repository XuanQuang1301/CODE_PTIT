
n, m = map(int, input().split())
arr = [[0] * m] * n
max_ans = -10000
min_ans = 10000
for i in range(n):
    arr[i] = [int(x) for x in input().split()]

for i in range(n):
    for j in range(m):
        max_ans = max(max_ans, arr[i][j])
        min_ans = min(min_ans, arr[i][j])
ans = -1
ok = False
for i in range(n):
    for j in range(m):
        if arr[i][j] == max_ans - min_ans:
            ans = arr[i][j]
            ok = True

if ok:
    print(ans)
    for i in range(n):
        for j in range(m):
            if arr[i][j] == ans:
                print('Vi tri [' + str(i) + '][' + str(j) + ']')
else:
    print('NOT FOUND')




