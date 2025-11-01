import math
def checkNT(n):
    if n < 2: return False
    for i in range(2, int(math.sqrt(n)) + 1, 2):
        if n % i == 0:
            return False
    return True
def check1(n):
    sum = 0
    for i in range(0, len(n)):
        if i % 2 == 0 and int(n[i]) % 2 == 1: return False
        if i % 2 == 1 and int(n[i]) % 2 == 0: return False
        sum += int(n[i])
    if(checkNT(sum)): return True
    return False
for case in range(int(input())):
    n = input()
    if(check1(n)): print("YES")
    else: print("NO")