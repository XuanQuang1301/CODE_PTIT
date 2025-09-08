for case in range(int(input())):
    n, m = map(int, input().split())
    if m % 2 == 1:
        print('A')
    else:
        while m != 2 ** (n - 1):
            if m > 2 ** (n - 1):
                m = 2 ** n - m
            n -= 1
        print(chr(n + 64))
