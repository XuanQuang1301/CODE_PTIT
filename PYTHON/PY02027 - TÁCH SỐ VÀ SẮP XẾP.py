arr = []
for case in range(int(input())):
    s = input()
    i = 0
    while i < len(s):
        if s[i].isdigit():
            tmp = 0
            while i < len(s) and s[i].isdigit():
                tmp = tmp * 10 + int(s[i])
                i += 1
            arr.append(tmp)
        else: i += 1
arr.sort()
for i in arr: print(i)
