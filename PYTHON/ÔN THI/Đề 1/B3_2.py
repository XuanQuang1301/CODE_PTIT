import math
for case in range(int(input())):
    x = [int(i) for i in input().split()]
    y = [int(i) for i in input().split()]
    if len(x) != len(y):
        print('INVALID')
        continue
    ans = 0
    for i in range(len(x)):
        ans += math.fabs(x[i] - y[i])
    print(f"{ans:.5f}")