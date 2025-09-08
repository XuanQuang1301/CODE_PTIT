
for _ in range(int(input())):
    s = input()
    i = 1
    ok = False
    while i <= 1000:
        if int(s) % 7 == 0:
            print(s)
            ok = True
            break
        s = str(int(s) + int(s[::-1]))
        i += 1
    if not ok:
        print(-1)