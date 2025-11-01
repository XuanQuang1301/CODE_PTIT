import math
def nt(n):
    if n == 2 or n == 3 or n == 5 or n == 7:
        return True
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
def check(s):
    for i in range(0, len(s)):
        if nt(i) and not nt(int(s[i])):
            return False
        if not nt(i) and nt(int(s[i])):
            return False
    return True

for case in range(int(input())):
    s = input()
    if check(s):
        print("YES")
    else:
        print("NO")