def check(a = [], b = []):
    global n
    if a[0] > b[0] or a[n - 1] > b[n - 1]:
        return False
    for i in range(1, n - 1):
        if a[i] > b[i]:
            return False
    return True
for case in range(int(input())):
    n = int(input())
    a = [int(i) for i in input().split()]
    b = [int(i) for i in input().split()]
    a.sort()
    b.sort()
    if check(a, b):
        print("YES")
    else:
        print("NO")