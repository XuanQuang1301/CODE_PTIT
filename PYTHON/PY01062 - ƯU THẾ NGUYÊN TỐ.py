import math
def nt(n):
    if n < 2:
        return False
    m = int(math.sqrt(n))
    for i in range(2, m):
        if n % i == 0:
            return False    
    return True
for case in range(int(input())):
    s = input()
    i = 0
    j = 0
    for tmp in s:
        if tmp == '2' or tmp == '3' or tmp == '5' or tmp == '7':
            i += 1
        else:
            j += 1
    if nt(len(s)) and i > j:
        print("YES")
    else:
        print("NO")