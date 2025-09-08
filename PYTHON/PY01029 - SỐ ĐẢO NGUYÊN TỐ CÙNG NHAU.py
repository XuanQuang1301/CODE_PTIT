import math
for _ in range(int(input())):
    n = input()
    a = int(n)
    b = int(n[::-1])
    if math.gcd(a, b) == 1:
        print("YES")
    else:
        print("NO")