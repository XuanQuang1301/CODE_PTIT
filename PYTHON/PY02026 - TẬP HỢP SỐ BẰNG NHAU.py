n, m = map(int, input().split())
a = sorted({int(x) for x in input().split()})
b = sorted({int(x) for x in input().split()})
c = [int(i) for i in a if i in b]

if len(c) == len(a) and len(c) == len(b):
    print("YES")
else: print("NO")

