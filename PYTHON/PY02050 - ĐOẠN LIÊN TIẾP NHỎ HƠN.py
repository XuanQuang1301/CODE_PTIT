
for case in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    for i in range(n):
        cnt = 0
        for j in range(i, -1, -1):
            if a[j] <= a[i]:
                cnt += 1
            else:
                break
        print(cnt, end = ' ')