from math import log2
BASE = '0123456789ABCDEF'
for case in range(int(input())):
    base = int(log2(int(input())))
    n = input()
    while len(n) % base:
        n = '0' + n
    pow = [1]
    for i in range(1, base):
        pow = [pow[0] * 2] + pow
    ans = ''
    for i in range(0, len(n), base):
        tmp = 0
        for j in range(i, i + base):
            tmp += int(n[j]) * pow[j - i]
        ans += BASE[tmp]
    print(ans)