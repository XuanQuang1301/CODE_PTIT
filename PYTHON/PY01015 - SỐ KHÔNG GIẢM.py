def check(s):
    for i in range(len(s) - 1):
        if int(s[i]) > int(s[i + 1]):
            return False
    return True
for _ in range(int(input())):
    s = input()
    if check(s):
        print("YES")
    else:
        print("NO")