tmp, b = [1] * 10001, []
for i in range(2, 10001):
    if tmp[i] == 1:
        for j in range(i * i, 10001, i):
            tmp[j] = 0
        b.append(i)
n = int(input())
a = [int(i) for i in input().split()]
cnt = []
nto = []
for i in range(n):
    if b.count(a[i]) == 1:
        cnt.append(i)
        nto.append(a[i])
j = 0
nto = sorted(nto)
for i in range(n):
    if cnt.count(i) == 1:
        print(nto[j], end = " ")
        j += 1
    else: print(a[i], end = " ")