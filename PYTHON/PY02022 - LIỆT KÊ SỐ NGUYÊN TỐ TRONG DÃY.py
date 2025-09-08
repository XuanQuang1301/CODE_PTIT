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

n = int(input())
list = [int(i) for i in input().split()]
arr = {}
for i in list:
    if(nt(i)):
        if i in arr:
            arr[i] += 1
        else:
            arr[i] = 1
for i in arr:
    print(i, arr[i])