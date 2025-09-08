
for _ in range(int(input())):
    s = input()
    for i in range(0, len(s), 2):
        n = int(s[i + 1])
        print(s[i] * n, end = '')
    print()