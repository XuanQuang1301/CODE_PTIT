import math
def nto(n):
    if n < 2: return False
    if n == 2: return True
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True
n = int(input())
a = [int(x) for x in input().split()]
tmp = [0] * 10000
b = []
for i in a:
    if tmp[i] != 1:
        b.append(i)
    tmp[i] = 1
sum_b = [0] * len(b)
sum_b[0] = b[0]
for i in range(1, len(b)):
    sum_b[i] = sum_b[i - 1] + b[i]
j = -1
for i in range(0, len(b) - 2):
    if i == 0:
        sum_f = sum_b[0]
        sum_r = sum_b[len(b) - 1] - sum_b[0]
        if nto(sum_f) and nto(sum_r):
            j = i
            break

    sum_f = sum_b[i]
    sum_r = sum_b[len(b) - 1] - sum_b[i]
    if nto(sum_f) and nto(sum_r):
        j = i
        break

if j != -1:
    print(j)
else: print("NOT FOUND")
