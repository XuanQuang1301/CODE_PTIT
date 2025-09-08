def val(n):
    sum = 1
    for i in range(1, n + 1, 1):
        sum *= i
    return sum

for _ in range(int(input())):
    n = int(input())
    m = n
    ans = 0
    while n > 0:
        ans += val(n % 10)
        n //= 10
    if(ans == m):
        print("Yes")
    else:
        print("No")