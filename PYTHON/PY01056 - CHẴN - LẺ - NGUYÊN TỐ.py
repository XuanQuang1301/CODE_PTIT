import math
def check(s):
    sum = 0
    for i in range(0, len(s)):
        if i % 2 == 0 and int(s[i]) % 2 == 1:
            return False
        if i % 2 != 0 and int(s[i]) % 2 == 0:
            return False
        sum += int(s[i])

    if sum < 2 or sum % 2 == 0:
        return False
    m = int(math.sqrt(sum))
    for i in range(2, m + 1):
        if sum % i == 0:
            return False
    return True
for case in range(int(input())):
    s = input()
    if check(s):
        print("YES")
    else:
        print("NO")
        