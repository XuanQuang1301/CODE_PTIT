n = int(input())
arr = []
for i in range(n):
    arr.append(list(input().strip()))   # lấy từng ký tự

tmp = 0
for i in range(n):
    x = 0
    y = 0
    for j in range(n):
        if arr[i][j] == 'C':
            x += 1
        if arr[j][i] == 'C':
            y += 1
    tmp = tmp + (x * (x - 1))/2 + (y * ( y - 1))/2
    # print(x * (x - 1), " ", y * (y - 1))
print(int(tmp))
