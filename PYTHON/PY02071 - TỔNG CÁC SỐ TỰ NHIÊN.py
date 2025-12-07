def Try(n, i, ans, tmp, sum):
    for j in range(i, n + 1):
        if sum + j > n: continue
        if sum + j == n:
            ans.append(sorted(tmp + [j], reverse = True))
            return
        else: Try(n, j, ans, tmp + [j], sum + j)

for case in range(int(input())):
    n = int(input())
    ans = []
    tmp = []
    sum = 0
    Try(n, 1, ans, tmp, sum)
    ans = sorted(ans, reverse = True)
    print(len(ans))
    for i in ans:
        print('(', end = '')
        for j in range(len(i)):
            print(i[j], end = '')
            if j < len(i) - 1: print(' ', end = '')
        print(')', end = ' ')
    print()