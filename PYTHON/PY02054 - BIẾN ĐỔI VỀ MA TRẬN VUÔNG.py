n, m = map(int, input().split())
a = [[0 for _ in range(m)] for _ in range(n)]
for i in range(n):
    a[i] = list(map(int, input().split()))
if n == m:
    for i in range(n):
        for j in range(m):
            print(a[i][j], end=' ')
        print()

elif n > m:
    cnt = n
    for i in range(n):
        if i % 2 == 0 and cnt > m:
            cnt -= 1
            continue
        for j in range(m):
            print(a[i][j], end=' ')
        print()

else:
    mark = [0] * 51
    cnt = m
    for i in range(n):
        for j in range(m):
            if cnt > n and j % 2 == 1:
                mark[j] = 1
                cnt -= 1
                continue
            if mark[j] == 0: print(a[i][j], end=' ')
        print()