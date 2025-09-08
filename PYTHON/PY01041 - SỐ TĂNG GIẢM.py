def check(s):
    if len(s) < 3:
        return False
    ok = 1
    for i in range(1, len(s)):
        if ok == 1 and s[i] < s[i - 1]:
            ok = 0
        if ok == 0 and s[i] >= s[i - 1]:
            return False
        if s[i] == s[i - 1]:
            return False
    return True

for _ in range(int(input())):
    s = input()
    if check(s):
        print("YES")
    else:
        print("NO")