n = int(input())
arr = [int(x) for x in input().split()]
i = 1
while i < len(arr):
    tmp = arr[i] + arr[i - 1]
    if tmp % 2 == 0:
        arr.pop(i)
        arr.pop(i - 1)
        if i > 1:
            i -= 1
    else: i += 1
print(len(arr))
