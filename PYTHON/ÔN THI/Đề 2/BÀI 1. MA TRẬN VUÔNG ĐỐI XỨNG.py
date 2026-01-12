
n = int(input())
arr = [[0] * n] * n
for i in range(n):
    arr[i] = [int(x) for x in input().split()]
ok = True
tmp = arr[0][0]
for i in range(n):
    if ok == False:
        break
    for j in range(n):
        if i == j:
            if arr[i][j] != tmp:
                ok = False
                break
        elif arr[i][j] != arr[j][i]:
            ok = Falseaaaa
            break
print("YES" if ok else "NO")
