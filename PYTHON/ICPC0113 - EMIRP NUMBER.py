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
def dao(n):
    m = 0
    while n > 0:
        m = m * 10 + n % 10
        n //= 10
    return m
for _ in range(int(input())):
    n = int(input())
    visited = set()
    for i in range(13, n + 1, 1):
        if i in visited:
            continue
        if dao(i) > n:
            continue
        j = dao(i)
        if nt(i) and i != j and nt(j):
            visited.add(i)
            visited.add(j)
            print(str(i) + " " + str(j), end = ' ')
    print()