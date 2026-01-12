
for case in range(int(input())):
    a, b, c, d, M = map(int, input().split())
    a = a**b
    c = c ** d
    a = (a ** c ) % M
    print(a)
