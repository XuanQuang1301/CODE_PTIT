import math

def check (n):
    if n == 2 or n == 3 or n == 5 or n == 7:
        return True
    return False
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

for _ in range(int(input())):
    s = input()
    x1 = 0
    x2 = 0
    for i in s:
        if check(int(i)):
            x1 += 1
        else:
            x2 += 1
    if not nt(len(s)) or x2 > x1:
        print("NO")
    else:
        print("YES")