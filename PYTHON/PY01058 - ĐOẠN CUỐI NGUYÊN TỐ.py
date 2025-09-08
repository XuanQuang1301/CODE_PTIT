import math
def nt(n):
    if n < 2:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    m = int(math.sqrt(n))
    for i in range(3, m + 1):
        if n % i == 0:
            return False
    return True
for case in range(int(input())):
    s = input()
    n = len(s)
    ans = s[n - 4 : n]
    if nt(int(ans)):
        print("YES")
    else:
        print("NO")