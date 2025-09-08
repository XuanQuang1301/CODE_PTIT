 
for case in range(int(input())):
    s = input()
    tich = -1
    tong = 0
    for i in range(0, len(s)):
        if i % 2 == 0:
            tong += int(s[i])
        else:
            if tich == -1 and s[i] != '0':
                tich = 1
            if s[i] != '0':
                tich *= int(s[i])
    print(tong, end = ' ')
    if tich != -1:
        print(tich)
    else:
        print(0)