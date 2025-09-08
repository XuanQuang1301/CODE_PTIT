
for case in range(int(input())):
    n = int(input())
    a = [0] * n
    tmp = [0] * 1005
    for i in range(0, n):
        a[i] = int(input())
        tmp[a[i]] += 1

    ans = 0
    j = 0
    a.sort()
    for i in a:
        if tmp[i] > ans:
            j = i
            ans = tmp[i]
    print(j)
