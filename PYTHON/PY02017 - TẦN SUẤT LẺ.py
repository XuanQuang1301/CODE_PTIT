
for case in range(int(input())):
    n = int(input())
    a = [int(x) for x in input().split()]
    b = [0] * 1000001
    for i in a:
        b[i] += 1
    j = 0
    for i in a:
        if b[i] % 2 == 1:
            j = i
    print(j)