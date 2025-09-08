n = int(input())
list = [float(i) for i in input().split()]
minn = min(list)
maxn = max(list)
ans = 0
cnt = 0
for i in list:
    if i != minn and i != maxn:
        ans += i
        cnt += 1
print(f"{(ans / cnt):.2f}")