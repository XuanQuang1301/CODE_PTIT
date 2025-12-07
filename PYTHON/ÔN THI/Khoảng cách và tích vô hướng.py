for case in range(int(input())):
    x = [int(i) for i in input().split()]
    y = [int(i) for i in input().split()]
    kc = 0
    tich = 0
    for i in range(len(x)):
        kc = kc + ((x[i] - y[i]) ** 2)
        tich += (x[i] * y[i])
    kc = kc ** 0.5
    print(f"{kc:.2f} {tich}")