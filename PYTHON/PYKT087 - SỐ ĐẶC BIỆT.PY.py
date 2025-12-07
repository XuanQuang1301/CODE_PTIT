mod = 10**9 + 7
for case in range(int(input())):
    n, k = map(int, input().split())
    k = bin(k)[2:]
    ans = 0
    j = len(k) - 1
    for i in k:
        if i == '1':
            ans += pow(n, j)
            ans %= mod
        j -= 1
    ans %= mod
    print(ans)
