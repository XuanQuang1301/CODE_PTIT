
for _ in range(int(input())):
    s = input()
    i = 0
    while i < len(s):
        count = 0
        c = s[i]
        while i < len(s) and s[i] == c:
            i += 1
            count += 1
        print(str(count) + str(c), end = '')
    print()