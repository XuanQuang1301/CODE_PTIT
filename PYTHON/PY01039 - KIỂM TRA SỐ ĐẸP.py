def check(s):
    tmp = set()
    for i in range(len(s) - 2):
        if len(tmp) > 2:
            return False
        if s[i] != s[i + 2]:
            return False
        tmp.add(s[i])
    return True
for _ in range(int(input())):
    s = input()
    if check(s):
        print("YES")
    else:
        print("NO")