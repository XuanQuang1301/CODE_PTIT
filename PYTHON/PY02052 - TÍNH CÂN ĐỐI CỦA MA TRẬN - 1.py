n = int(input())
a = [[0] * n] * n
for i in range(n):
    a[i] = list(map(int, input().split()))
k = int(input())

sum_t, sum_v = 0, 0
for i in range(n):
    for j in range(n):
        if j > i:
            sum_t += a[i][j]
        if j < i:
            sum_v += a[i][j]
if abs(sum_t - sum_v) < k:
    print("YES")
else:
    print("NO")
print(abs(sum_t - sum_v))
