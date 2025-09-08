
for _ in range(int(input())):
    s = input()
    n = int(s[len(s) - 2]) * 10 + int(s[len(s) - 1])
    if n != 86:
        print("NO")
    else:
        print("YES")