
for case in range(int(input())):
    n = input()
    a = sorted(list([int(i) for i in input().split()]))

    b = sorted(list([int(i) for i in input().split()]))
    ok = False
    for i in range(len(a)):
        if a[i] > b[i]:
            ok = True
            break
    if ok:
        print("NO")
    else: print("YES")
