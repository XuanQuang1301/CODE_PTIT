import math
for case in range(int(input())):
    a = [int(i) for i in input().split()]
    b = [int(i) for i in input().split()]
    if len(a) != len(b):
        print('INVALID')
        continue
    Euclid = 0
    for i in range(len(a)):
        Euclid += (b[i] - a[i]) ** 2
    Euclid = math.sqrt(Euclid)
    tich = 0
    for i in range(len(a)):
        tich += (a[i] * b[i])
    print(f"{Euclid:.2f}", tich)