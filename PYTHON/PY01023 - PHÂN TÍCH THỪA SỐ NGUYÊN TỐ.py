import math

def pt(n):
    print("1 * ", end = '')
    m = int(math.sqrt(n))
    for i in range(2, m + 1, 1):
        if n % i == 0:
            count = 0
            while n % i == 0:
                count += 1
                n/=i
            print (str(i) + "^" + str(count),end = ' ')
            if n > 1:
                print("*", end = ' ')     
    if n > 1:
        print(str(int(n)) + "^" + "1", end = '')
    print()
for _ in range(int(input())):
    n = int(input())
    pt(n)