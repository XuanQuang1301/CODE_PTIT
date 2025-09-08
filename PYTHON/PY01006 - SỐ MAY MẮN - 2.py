t = int(input())
for _ in range(t):
    s = input()
    ok = True
    for i in range(len(s)):
        if int(s[i]) != 4 and int(s[i]) != 7:
            ok = False
            break
    if(ok):
        print("YES")
    else:
        print("NO")
