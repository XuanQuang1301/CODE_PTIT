n = int(input())
arr = []
while len(arr) < n:
    arr.extend(list(map(int, input().split())))
a = []
b = []

for i in arr:
    if i % 2 == 0:
        a.append(i)
    else: b.append(i)
a = sorted(a)
b = sorted(b, key=int, reverse=True)
i = 0
j = 0
result = []
for x in arr:
    if x % 2 == 0:
        result.append(a[i])
        i += 1
    else:
        result.append(b[j])
        j += 1
print(*result)