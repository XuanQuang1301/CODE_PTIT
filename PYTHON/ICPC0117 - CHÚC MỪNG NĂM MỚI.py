n = int(input())
c = set()
for i in range(n):
    s = input().split()
    s = ' '.join(s)
    c.add(s)
print(len(c))