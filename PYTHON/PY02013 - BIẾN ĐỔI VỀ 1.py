def check(n):
    ans = 1
    while n != 1:
        if n % 2 == 0:
            n //= 2
        else:
            n = n * 3 + 1
        ans += 1
    return ans
    
    
while True:
    n = int(input())
    if n == 0:
        break
    print(check(n))