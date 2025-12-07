n = int(input())
arr = [int(x) for x in input().split()]
m = max(arr)
count, i = 0, 0
while i < n:
    if arr[i] == m:
        j = 0
        while i < n and arr[i] == m:
            j += 1
            i += 1
            count = max(count, j)
    else: i += 1
print(count)