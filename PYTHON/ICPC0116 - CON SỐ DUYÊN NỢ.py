for _ in range(int(input())):
    s = input()
    if s[0] != s[len(s) - 1]:
        print("N0")
    else:
        print("YES")