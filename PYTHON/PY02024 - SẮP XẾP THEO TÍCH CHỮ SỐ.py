import math
for t in range(int(input())):
    n = int(input())
    a = input().split()
    a.sort(key = lambda s: (math.prod(int(i) for i in s), int(s)))
    print(*a)