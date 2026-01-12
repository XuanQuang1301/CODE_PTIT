def heso(s):
    nhom = s[0]
    nam = int(s[1:3])
    if 1 <= nam <= 3:
        if nhom == 'A': return 10
        if nhom == 'B': return 10
        if nhom == 'C': return 9
        if nhom == 'D': return 8
    elif 4 <= nam <= 8:
        if nhom == 'A': return 12
        if nhom == 'B': return 11
        if nhom == 'C': return 10
        if nhom == 'D': return 9
    elif 9 <= nam <= 15:
        if nhom == 'A': return 14
        if nhom == 'B': return 13
        if nhom == 'C': return 12
        if nhom == 'D': return 11
    elif nam >= 16:
        if nhom == 'A': return 20
        if nhom == 'B': return 16
        if nhom == 'C': return 14
        if nhom == 'D': return 13
class phong:
    def __init__(self, s) -> None:
        s = s.split()
        self.code = s[0]
        self.name = ' '.join(s[1:])
class nhanvien:
    def __init__(self, code, name, sday, days, o):
        self.code = code
        self.name = name
        self.sum = sday * days * heso(code) * 10 ** 3
        self.o = o
    def __str__(self):
        return f"{self.code} {self.name} {self.o.name} {self.sum}"
n = int(input())
m = {}
for i in range(n):
    o = phong(input())
    m[o.code] = o
n = int(input())
arr = []
for i in range(n):
    code = input()
    arr.append(nhanvien(code, input(), int(input()), int(input()), m[code[3:]]))
for i in arr: print(i)
