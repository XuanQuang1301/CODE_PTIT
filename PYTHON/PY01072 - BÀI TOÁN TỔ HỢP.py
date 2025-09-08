def Try(i, tmp):
    global n, k
    if len(tmp) == k:
        print(*tmp)
        return
    for j in range(i, n):
        Try(j + 1, tmp + [arr[j]])

n, k = [int(i) for i in input().split()]
arr = sorted(list({int(i) for i in input().split()}))

n = len(arr)

Try(0, [])