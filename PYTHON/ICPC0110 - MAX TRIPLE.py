import sys
input = sys.stdin.readline

T = int(input().strip())

for _ in range(T):
    N = int(input().strip())
    arr = list(map(int, input().split()))

    max1 = max2 = max3 = -10**30   # nhỏ hơn mọi A[i]

    for x in arr:
        if x >= max1:
            max3 = max2
            max2 = max1
            max1 = x
        elif x >= max2:
            max3 = max2
            max2 = x
        elif x >= max3:
            max3 = x

    print(max1 + max2 + max3)
