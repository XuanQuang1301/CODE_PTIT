
for case in range(int(input())):
    a, b, c = map(int, input().split())
    x = [int(i) for i in input().split()]
    y = [int(i) for i in input().split()]
    z = [int(i) for i in input().split()]
    ok = False
    i = 0
    j = 0
    k = 0
    while i < a and j < b and k < c:
        if x[i] < y[j] or x[i] < z[k]:
            i += 1
        elif y[j] < x[i] or y[j] < z[k]:
            j += 1
        elif z[k] < x[i] or z[k] < y[j]:
            k += 1
        else:
            print(x[i], end = " ")
            i += 1
            j += 1
            k += 1
            ok = True
    if not ok:
        print("NO")
    else: print()
