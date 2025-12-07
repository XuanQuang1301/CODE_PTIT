
for case in range(int(input())):
    n = int(input())
    if n % 2 == 0:
        sum = 0
        for i in range(0, ((n - 2) // 2) + 1):
            sum += ((-1) ** i) / (2 * (i + 1))
        print(f"{sum:.5f}")
    else:
        sum = 0
        for i in range(0, ((n - 1) // 2) + 1):
            sum += ((-1)  ** i) / ((2 ** i) + 1)
        print(f"{sum:.5f}")