a = []
with open('DATA1.in', 'r', encoding = 'utf-8') as f:
    for lines in f.readlines():
        a.extend(lines.lower().split())

b = []
with open('DATA2.in', 'r', encoding = 'utf-8') as f:
    for lines in f.readlines():
        b.extend(lines.lower().split())
a = set(a)
b = set(b)
c = sorted([str(x) for x in a if x not in b])
d = sorted([str(x) for x in b if x not in a])
print(*c)
print(*d)