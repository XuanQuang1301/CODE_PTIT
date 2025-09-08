def doi(s):
    n = 0
    tmp = 0
    for i in range(len(s) - 1, -1, -1):
        if s[i] != '0':
            n += pow(2, tmp)
        tmp += 1
    return str(n)
s = input()
# print(doi(s))
while len(s) % 3 != 0:
    s = "0" + s
n = ""

for i in range(0, len(s), 3):
    tmp = s[i: i + 3]
   
    n = n + doi(tmp)
print(n)