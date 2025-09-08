import math

def nt(n):
    m = int(math.sqrt(n))
    for i in range(2, m + 1, 1):
        if n % i == 0:
            return False
    return n > 1

t = int(input())
for _ in range(t):
    n = int(input())
    k = 0
    for i in range(n):
        if math.gcd(i, n) == 1:
            k += 1
    if(nt(k)):
        print("YES")
    else:
        print("NO")

