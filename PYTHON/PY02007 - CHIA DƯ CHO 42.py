
a = [0] * 10
for i in range(10):
    a[i] = int(input())
c = set()
for i in range(10):
    a[i] %= 42
    c.add(a[i])
print(len(c))