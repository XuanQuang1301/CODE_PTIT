import math
for case in range(int(input())):
    x = [int(i) for i in input().split()]
    y = [int(i) for i in input().split()]
    q = int(input())
    ans = 0
    if len(x) != len(y):
        print('INVALID')
        continue
    for i in range(len(x)):
        tmp =  math.fabs(x[i] - y[i])
        tmp = tmp ** q
        ans += tmp
    ans = ans ** (1 / q)
    print(f"{ans:.5f}")