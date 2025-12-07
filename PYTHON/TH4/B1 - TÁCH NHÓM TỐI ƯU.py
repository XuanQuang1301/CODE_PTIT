n, k = map(int, input().split())
a = list(map(int, input().split()))
idx, cnt = 1, 0
a.sort()
while idx < len(a):
    if abs(a[idx] - a[idx - 1]) <= k:
        idx += 1
        continue
    cnt += 1
    idx += 1
cnt += 1
print(cnt)