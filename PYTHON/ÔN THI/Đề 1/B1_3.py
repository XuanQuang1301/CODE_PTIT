
for case in range(int(input())):
    arr = input()
    a = 1
    b = 0
    for i in range(len(arr)):
        if i % 2 == 0 and int(arr[i]) != 0:
            a *= int(arr[i])
        elif i % 2 == 1:
            b += int(arr[i])
    if b == 0:
        print('INVALID')
    else:
        ans = a / b
        print(f"{ans:.6f}")