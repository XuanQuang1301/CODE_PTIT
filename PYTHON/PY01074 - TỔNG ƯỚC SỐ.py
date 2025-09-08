import math
def pt(n):
    sum = 0
    m = int(math.sqrt(n))
    for i in range(2, m + 1):
        while(n % i == 0):
            sum += i
            n //= i
    if n > 1:
        sum += n
    return sum
ans = 0
for case in range(int(input())):
    s = int(input())
    ans += pt(s)
print(ans)
