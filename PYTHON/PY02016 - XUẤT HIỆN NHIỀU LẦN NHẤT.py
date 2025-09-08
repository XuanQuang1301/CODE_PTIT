
for case in range(int(input())):
    n = int(input())
    a = [int(i) for i in input().split()]
    tmp = [0] * n
    for i in a:
        tmp[i] += 1
    ans = 0
    j = -1
    a.sort()
    for i in a:
        if tmp[i] > ans and tmp[i] > n / 2:
            ans = tmp[i]
            j = i
    if j != -1:
        print(j)
    else: print("NO")