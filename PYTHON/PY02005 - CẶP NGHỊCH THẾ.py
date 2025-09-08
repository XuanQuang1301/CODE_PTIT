n = int(input())
a = [int(i) for i in input().split()]
ans = 0
for i in range(1, n):
    for j in range(0, i):
        if a[j] > a[i]:
            ans += 1
print(ans)