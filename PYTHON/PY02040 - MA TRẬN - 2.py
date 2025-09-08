
n = int(input())
arr = [[]] * n
for i in range(n):
    arr[i] = [int(i) for i in input().split()]
k = int(input())
sum1 = 0
sum2 = 0
for i in range(n):
    for j in range(n):
        if j < n - i - 1:
            sum1 += arr[i][j]
        if j > n - i - 1:
            sum2 += arr[i][j]
if abs(sum1 - sum2) <= k:
    print("YES")
else:
    print("NO")
print(abs(sum1 - sum2))