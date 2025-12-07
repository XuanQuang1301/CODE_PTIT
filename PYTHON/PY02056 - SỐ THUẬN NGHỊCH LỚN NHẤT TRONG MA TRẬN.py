
def tn(i):
    s = str(i)
    s2 = s[::-1]
    if s != s2:
        return False
    return True


n, m = map(int, input().split())
arr = [[0] * m] * n
for i in range(n):
    arr[i] = [int(x) for x in input().split()]
ok = False
max_ans = 0
for i in range(n):
    for j in range(m):
        if tn(arr[i][j]) and arr[i][j] >= max_ans:
            max_ans = arr[i][j]
            ok = True
if ok:
    print(max_ans)
    for i in range(n):
        for j in range(m):
            if arr[i][j] == max_ans:
                print('Vi tri [' + str(i) + '][' + str(j) + ']')
else:
    print('NOT FOUND')




