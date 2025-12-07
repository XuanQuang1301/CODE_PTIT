
for case in range(int(input())):
    n = int(input())
    arr = [int(x) for x in input().split()]
    l = min(arr)
    r = max(arr)
    cnt = 0
    for i in range(l, r + 1):
        if i not in arr:
            cnt += 1
    print(cnt)