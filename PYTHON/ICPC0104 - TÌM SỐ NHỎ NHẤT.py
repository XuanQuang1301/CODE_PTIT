t = int(input())
for _ in range(t):
    s = input().strip()
    ans = float('inf')
    n = len(s)
    i = 0
    while i < n:
        if s[i].isdigit():
            tmp = 0
            while i < n and s[i].isdigit():
                tmp = tmp * 10 + int(s[i])
                i += 1
            ans = min(ans, tmp)
        else:
            i += 1
    print(ans)
