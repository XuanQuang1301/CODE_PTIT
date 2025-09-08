import math
a, b = map(int, input().split())

min_b = int(math.pow(10, int(b - 1)))
max_b = int(math.pow(10, int(b)) - 1)
cnt = 0
for i in range(min_b, max_b + 1, 1):
    if math.gcd(int(a), i) == 1:
        cnt += 1
        print(i, end = ' ')
    if cnt == 10:
        cnt = 0
        print()
print()