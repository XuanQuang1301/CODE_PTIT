
for case in range(int(input())):
    s, n = map(str, input().split())
    n = int(n)
    ans = ''
    for i in s:
        if i >= 'a' and i <= 'z':
            tmp = (ord(i) - ord('a') + n) % 26 + ord('a')
        elif i >= 'A' and i <= 'Z':
            tmp = (ord(i) - ord('A') + n) % 26 + ord('A')
        ans += chr(tmp)
    print(ans)