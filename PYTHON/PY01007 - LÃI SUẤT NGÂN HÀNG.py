t = int(input())
for _ in range(t):
    n, x, m = map(float, input().split())
    ans = 0
    while n * pow((1 + x / 100), ans) < m:
        ans += 1
    print(ans)
