import math

def Try(i, n, visited, ans):
    if i == n + 1:
        for i in ans:
            print(i, end = '')
        print(' ', end = '')
    for j in range(n, 0, -1):
        if j not in visited:
            Try(i + 1, n, visited + [j], ans + [j])
for case in range(int(input())):
    n = int(input())
    visited = [False] * (n + 1)
    ans = []
    print(math.factorial(n))
    Try(1, n, visited, ans)
    print()