def check(s):
    if len(s) % 2 == 0:
        return False
    if s[0] == s[1]:
        return False
    if s[2] != s[len(s) - 1]:
        return False
    tmp = s[2]
    for i in range(2, len(s), 2):
        if s[i] != tmp:
            return False
    return True
for _ in range(int(input())):
    s = input()
    if check(s):
        print("YES")
    else:
        print("NO")