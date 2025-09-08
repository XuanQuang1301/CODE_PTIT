t = int(input())
for _ in range(t):
    s = input()
    n = 0
    for i in range(0, 2, 1):
        n = n * 10 + int(s[i])
    m = 0
    for i in range(len(s) - 2, len(s), 1):
        m = m * 10 + int(s[i])
    if(n == m):
        print("YES")
    else:
        print("NO")
