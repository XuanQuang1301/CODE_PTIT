
s = input()
while len(s) > 1:
    len_s = len(s) // 2
    ans = int(s[:len_s]) + int(s[len_s:])
    s = str(ans)
    print(s)