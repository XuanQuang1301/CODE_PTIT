
n = int(input())
seen = set()
while n != 1 and n not in seen:
    seen.add(n)
    tmp = 0
    s = str(n)
    for i in s:
        tmp += int(i) ** 2
    n = tmp
print("YES" if n == 1 else "NO")