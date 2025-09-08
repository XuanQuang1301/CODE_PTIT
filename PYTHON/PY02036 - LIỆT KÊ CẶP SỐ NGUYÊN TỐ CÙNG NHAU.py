import math
n = int(input())
list = sorted([int(i) for i in input().split()])
for i in range(n - 1):
    for j in range(i + 1, n):
        if math.gcd(list[i], list[j]) == 1:
            print(list[i], list[j])