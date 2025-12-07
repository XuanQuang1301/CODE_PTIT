import math

for case in range(int(input())):
    a = [int(x) for x in input().split()]
    b = [int(x) for x in input().split()]
    if len(a) != len(b):
        print("INVALID")
        continue
    tmp = 0
    for i in range(len(a)):
        tmp += (b[i] - a[i]) ** 2
    tmp = math.sqrt(tmp)
    print(f"{tmp:.5f}")
