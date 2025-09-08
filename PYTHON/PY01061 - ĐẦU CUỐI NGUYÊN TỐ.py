import math
def check(n):
    if n < 2:
        return False
    if n == 2:
        return True
    m = int(math.sqrt(n))
    for i in range(2, m + 1):
        if n % i == 0:
            return False
    return True
for case in range(int(input())):
    s = input()
    begin = s[0 : 3]
    end = s[len(s) - 3 : len(s)]
    # print (begin + " " + end)
    if check(int(begin)) and check(int(end)):
        print("YES")
    else:
        print("NO")