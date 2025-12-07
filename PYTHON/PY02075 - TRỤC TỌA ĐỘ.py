
for case in range(int(input())):
    n = int(input())
    arr = []
    for i in range(n):
        x, y = [int(x) for x in input().split()]
        arr.append([x, y])
    arr.sort(key = lambda x : x[1])
    ans, pre = 0, -1
    for i in arr:
        if i[0] >= pre:
            ans += 1
            pre = i[1]
    print(ans)
