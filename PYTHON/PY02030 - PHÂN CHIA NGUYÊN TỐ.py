import math
def nto(x):
    if n < 2:
        return False
    for i in range(2, int(math.sqrt(x)) + 1):
        if x % i == 0:
            return False
    return True
n = int(input())
a = [int(x) for x in input().split()]
b = []
for i in a:
    if b.count(i) == 0:
        b.append(i)
m = len(b)
sum_b = [0] * m

sum_b[0] = b[0]
for i in range(1, m):
    sum_b[i] = sum_b[i - 1] + b[i]
ok = False
for i in range(0, m):
    x = sum_b[i]
    y = sum_b[m - 1] - sum_b[i]
    if nto(x) and nto(y):
        print(i)
        ok = True
        break
if not ok:
    print("NOT FOUND")