n = int(input())
ans = 0
Min = 1000000000
arr = [int(i) for i in input().split()]
for i in range(0, n):
    sum = 0
    for j in range(0, n):
        if i != j: sum += abs(arr[j] - arr[i])
    if sum < Min:
        Min = sum
        ans = arr[i]
print(Min, ans)