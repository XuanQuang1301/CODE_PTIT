n = int(input())
arr = []
while len(arr) < n:
    arr.extend(list(map(int, input().split())))
a = [int(i) for i in arr if i % 2 == 0]
b = [int(i) for i in arr if i % 2 == 1]
ans = []
i = 0
j = 0
a = sorted(a)
b = sorted(b, key = int, reverse = True)
for x in arr:
    if x % 2 == 0:
        ans.append(a[i])
        i += 1
    else:
        ans.append(b[j])
        j += 1
print(*ans)