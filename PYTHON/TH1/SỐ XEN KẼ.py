def check(s):
    if len(s) % 2 == 0 or s[0] == s[1]:
        return False
    n = s[0]
    for i in range(0, len(s), 2):
        if s[i] != n:
            return False
    return True

for case in range(int(input())):
    s = input()
    if check(s):
        print("YES")
    else: print("NO")
