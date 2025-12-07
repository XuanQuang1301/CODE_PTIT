
for case in range(int(input())):
    n = int(input())
    a = [int(x) for x in input().split()]
    maX = -1
    miN = 10000
    tmp = [0] * 10000
    for i in a:
        maX = max(i, maX)
        miN = min(i, miN)
        tmp[i] = 1
    cnt = 0
    for i in range(miN, maX + 1):
        if tmp[i] == 0:
            cnt += 1
    print(cnt)