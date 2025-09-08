import math
def nt(n):
    if n < 2:
        return False
    if n == 2:
        return True
    if n %  2 == 0:
        return False
    m = int(math.sqrt(n))
    for i in range(3, m + 1, 2):
        if n % i == 0:
            return False
    return True
def check1(n):
    sum = 0
    while n > 0:
        tmp = n % 10
        if not nt(tmp):
            return False
        sum += tmp
        n //= 10
    if not nt(sum):
        return False
    return True

for _ in range(int(input())):
    s = input()
    if nt(int(s)) and check1(int(s)) and nt(int(s[::-1])):
        print("Yes")
    else:
        print("No")
