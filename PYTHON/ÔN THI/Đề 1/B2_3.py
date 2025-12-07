
for case in range(int(input())):
    s = input()
    a = {}
    for i in s:
        a[i] = s.count(i)
    x = ''
    y = ''
    for i in s:
        if a[i] == 1:
            x += i
        elif a[i] > 1:
            y += i
            a[i] = 0
    print(x if x != '' else "NONE")
    print(y if y != '' else "NONE")

# from collections import Counter
#
# for case in range(int(input())):
#     s = input()
#     c = Counter(s)
#     x = ''.join([ch for ch in s if c[ch] == 1])
#     y = ''.join([ch for ch in s if c[ch] > 1 and c.update({ch:0}) is None])
#     print(x if x else "NONE")
#     print(y if y else "NONE")
