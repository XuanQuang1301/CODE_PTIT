def check(n):
    s = str(n)
    if len(s) < 2: return False
    if s == s[::-1]:
        return True
    return False
n, m = [int(x) for x in input().split()]
arr = [[0] * m] * n
for i in range(n):
    arr[i] = [int(x) for x in input().split()]
ans = -1
for i in range(n):
    for j in range(m):
        if check(arr[i][j]) and arr[i][j] > ans:
            ans = arr[i][j]
if ans == -1:
    print('NOT FOUND')
else:
    print(ans)
    for i in range(n):
        for j in range(m):
            if arr[i][j] == ans:
                print('Vi tri [' + str(i) + '][' + str(j) + ']')
