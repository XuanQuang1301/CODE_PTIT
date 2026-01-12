import sys, math
data = sys.stdin.read().strip().split()
t = int(data[0])
idx = 1
for _ in range(t):
    n = int(data[idx])
    k = int(data[idx+1])
    idx += 2
    a = list(map(int, data[idx:idx+n]))
    idx += n

    ans = n + 5
    for i in range(n):
        g = 0
        for j in range(i, n):
            g = math.gcd(g, a[j])
            if g < k:
                break
            if g == k:
                ans = min(ans, j - i + 1)
                break
    print(-1 if ans == n + 5 else ans)
