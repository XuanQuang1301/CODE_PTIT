def check(s):
    if len(s) % 2 == 1 or s[0] == s[2]: return False
    for i in range(3, len(s), 2):
        if s[i] != s[i - 2]:
            return False
    return True
for case in range(int(input())):
    s =input()
    print("YES" if check(s) else "NO")
