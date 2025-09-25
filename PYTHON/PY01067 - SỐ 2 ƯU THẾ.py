def tamphan(n):
    s = ""
    while n > 0:
        p = n % 3
        s = str(p) + s 
        n = n // 3
    return s
for case in range(int(input())):
    n = int(input())
    i = 2
    while n > 0:
        s = tamphan(i)
        cnt = s.count("2")
        if cnt > len(s) - cnt:
            print(tamphan(i), end = ' ')
            n -= 1
        i += 1
    print()