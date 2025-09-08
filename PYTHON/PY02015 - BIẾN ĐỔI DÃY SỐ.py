

while True:
    a = [int(i) for i in input().split()]
    if a[0] == a[1] == a[2] == a[3] == 0:
        break
    ans = 0
    while True:
        if a[0] == a[1] == a[2] == a[3]:
            break
        tmp = a[0]
        for i in range(0, 3):
            a[i] = abs(a[i] - a[i + 1])
        a[3] = abs(a[3] - tmp)
        ans += 1
    print(ans)