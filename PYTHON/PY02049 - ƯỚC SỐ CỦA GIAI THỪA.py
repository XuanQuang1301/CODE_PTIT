for case in range(int(input())):
    n, p = map(int, input().split())
    count = 0
    for i in range(1, n + 1):
        while i % p == 0:
            count += 1
            i //= p
    print(count)