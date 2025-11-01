n, m = map(int, input().split())
a = sorted({int(x) for x in input().split()})
b = sorted({int(x) for x in input().split()})


common = [i for i in a if i in b]
print(*common)

only_a = [i for i in a if i not in b]
print(*only_a)

only_b = [i for i in b if i not in a]
print(*only_b)
