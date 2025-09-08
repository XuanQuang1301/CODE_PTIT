def check(n):
    sum = 0
    while n > 0:
        tmp = n % 10
        sum += tmp
        n //= 10
        if n > 0 and abs((n % 10) - tmp) != 2:
            return False
    if(sum % 10 != 0):
        return False
    return True

for _ in range(int(input())):
    n = int(input())
    if check(n):
        print("YES")
    else:
        print("NO")