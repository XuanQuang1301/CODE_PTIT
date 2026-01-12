for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))

    bad = False
    for i in range(n - 1):
        if a[i] == a[i + 1]:
            bad = True
            break

    print("NO" if bad else "YES")
