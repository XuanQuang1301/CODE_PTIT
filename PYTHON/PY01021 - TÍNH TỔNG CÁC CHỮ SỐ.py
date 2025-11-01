
for case in range(int(input())):
    s = input()
    tmp = 0
    ans = ""
    for i in s: 
        if i.isdigit(): tmp += int(i)
        else: ans += i
    print(''.join(sorted(ans)), tmp, sep = "")