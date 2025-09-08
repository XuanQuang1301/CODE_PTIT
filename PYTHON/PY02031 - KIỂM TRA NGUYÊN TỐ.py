import math
def nt(n):
    if n < 2:
        return 0
    if n == 2:
        return 1
    m = int(math.sqrt(n))
    for i in range(2, m + 1):
        if n % i == 0:
            return 0
    return 1
n, m = map(int, input().split())
a = [0][0]
for i in range(n):
    list = [nt(int(i)) for i in input().split()]
    print(*list)

