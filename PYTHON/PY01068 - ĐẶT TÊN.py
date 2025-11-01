def Try(i, tmp):
    global n, k
    if len(tmp) == k:
        print(*tmp)
        return
    for j in range(i, n):
        Try(j + 1, tmp + [arr[j]])

n, k = map(int, input().split())
arr = sorted(list({i for i in input().split()}))
n = len(arr)
Try(0, [])