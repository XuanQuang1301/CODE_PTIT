def ce(s):
    for i in s:
        if i != '1' and i != '2' and i != '0':
            return False
    return True

for _ in range(int(input())):
    s = input()
    if ce(s):
        print("YES")
    else:
        print("NO")