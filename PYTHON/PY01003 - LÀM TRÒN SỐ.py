t = int(input())
for _ in range(t):
    s = list(input().strip())
    n = len(s)

    for j in range(n - 1, 0, -1):
        if int(s[j]) >= 5:
            s[j] = '0'
            s[j - 1] = str(int(s[j - 1]) + 1)
        else:
            s[j] = '0'
    if int(s[0]) >= 10:
        s[0] = '0'
        s.insert(0, '1')

    print(''.join(s))
