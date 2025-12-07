
n = int(input())
arr = [int(x) for x in input().split()]
k = int(input())
ans = []
for i in range(len(arr)):
    if arr[i] == k:
        ans.append(i)
if len(ans) == 0:
    print(-1)
else:
    for i in range(len(ans)):
        print(ans[i], end = '')
        if i < len(ans) - 1:
            print(', ', end = '')
