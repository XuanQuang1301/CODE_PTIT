S1 = input()
S2 = input()
p = int(input())  # vị trí chèn (1-based index)

p -= 1
result = S1[:p] + S2 + S1[p:]
print(result)
