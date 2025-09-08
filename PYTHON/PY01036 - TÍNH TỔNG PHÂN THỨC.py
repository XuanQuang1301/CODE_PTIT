import math
for _ in range(int(input())):
    n = int(input())
    i = 0
    if n % 2 == 0:
        i = 2
    else:
        i = 1
    ans = 0
    for i in range(i, n + 1, 2):
        ans += (float)(1 / i)
    print(f"{ans:.6f}")