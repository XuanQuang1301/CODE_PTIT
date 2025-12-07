
for case in range(int(input())):
    s = input()
    count = 0
    for i in range(len(s)):
        if s[i] == '0':
            tmp = 0
            while  i < len(s) and s[i] == '0' :
                i += 1
                tmp += 1
            count = max(count, tmp)
    print(count)