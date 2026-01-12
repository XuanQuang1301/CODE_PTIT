import sys
input = sys.stdin.readline
def check(n):
    res = 1
    d = 2
    if n % 2 == 0:
        res *= 2
        while n % 2 == 0:
            n //= 2
    d = 3
    while d * d <= n:
        if n % d == 0:
            res *= d
            while n % d == 0:
                n //= d
        d += 2
    if n > 1:
        res *= n
    return res
n = int(input())
arr = [int(x) for x in input().split()]
# Đếm tần suất xuất hiện của các radical
fred = {}
# Dùng cache để không phải tính lại radical cho các số giống nhau
cache_radical = {}

for x in arr:
    if x in cache_radical:
        r = cache_radical[x]
    else:
        r = check(x)
        cache_radical[x] = r

    if r in fred:
        fred[r] += 1
    else: fred[r] = 1
total = 0
for count in fred.values():
    if count > 1:
        total += count * (count - 1) // 2
print(total)
