import math
def nt(n):
    if n < 2:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    
    m = int(math.sqrt(n))
    for i in range(3, m + 1, 2):
        if n % i == 0:
            return False
    return True

for _ in range(int(input())):
    a, b = map(int, input().split())
    c = math.gcd(a, b)
    ans = 0
    while c > 0:
        ans += c % 10
        c //= 10
    if nt(ans):
        print("YES")
    else:
        print("NO")