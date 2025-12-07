
for case in range(int(input())):
    s, k = map(str, input().split())
    k = int(k)
    ans = ''
    for i in s:
        if 'a' <= i <= 'z':
            tmp = (ord(i) - ord('a') + k) % 26 + ord('a')
            ans += chr(tmp)
        elif 'A' <= i <= 'Z':
            tmp = (ord(i) - ord('A') + k) % 26 + ord('A')
            ans += chr(tmp)
    print(ans)