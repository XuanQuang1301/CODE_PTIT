import math
def nt(n):
    if n < 2:
        return False
    if n  == 2:
        return True
    if n % 2 == 0:
        return False
    m = int(math.sqrt(n))
    for i in range(3, m + 1, 2):
        if n % i == 0:
            return False
    return True
for _ in range(int(input())):
    s = input()
    sum = 0
    for i in s:
        sum += int(i)
    if nt(sum):
        print("YES")
    else:
        print("NO")