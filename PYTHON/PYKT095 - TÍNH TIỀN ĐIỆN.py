def loai(s):
    if s == 'A': return 100
    if s == 'B': return 500
    return 200
def chuanhoa(s):
    tmp = ''
    s = s.split()
    for i in s:
        tmp += i[0].upper() + i[1:].lower()
        tmp += ' '
    return tmp.strip()
class tiendien:
    def __init__(self, code, ten, s, socu, somoi):
        self.code = code
        self.ten = chuanhoa(ten)
        if s == 'A':
            self.loaidien = 100
        elif s == 'B':
            self.loaidien = 500
        else: self.loaidien = 200
        self.sodien = somoi - socu
        if self.sodien <= self.loaidien:
            self.tien1 = self.sodien * 450
        else:
            self.tien1 = self.loaidien * 450
        if self.sodien > self.loaidien:
            self.tien2 = (self.sodien - self.loaidien) * 1000
        else: self.tien2 = 0
        self.vat = self.tien2 // 20
        self.sum = self.tien1 + self.tien2 + self.vat
    def __str__(self):
        return f"{self.code} {self.ten} {self.tien1} {self.tien2} {self.vat} {self.sum}"
n = int(input())
a = []
for i in range(n):
    code = "KH" + f"{i + 1:02d}"
    name = input().strip()
    s = input().strip().split()
    loai = s[0]
    socu = int(s[1])
    somoi = int(s[2])
    a.append(tiendien(code, name, loai, int(socu), int(somoi)))
a = sorted(a, key = lambda i : -i.sum)
for i in a:
    print(i)
