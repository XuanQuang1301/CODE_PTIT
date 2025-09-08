s = input()
size_s = len(s) - 1
count = 1
while size_s >= 0:
    if count == 3 and size_s != 0:
        tmp = s[:size_s] + "," + s[size_s:]
        s = tmp
        count = 1
        size_s -= 1
    else:
        count += 1
        size_s -=1
print(s)
    