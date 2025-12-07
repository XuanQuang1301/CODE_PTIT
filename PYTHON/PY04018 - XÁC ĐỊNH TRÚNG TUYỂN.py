class giaovien:
    def __init__(self, ma, ten, maxt, x, y):
        self.ma = ma
        self.ten = ten
        if maxt[0] == 'A':
            self.mon =  'TOAN'
        elif maxt[0] == 'B':
            self.mon = 'LY'
        else: self.mon = 'HOA'
        self.tongdiem = x * 2 + y
        tmp = maxt[1]
        if tmp == '1':
            self.tongdiem += 2
        elif tmp == '2':
            self.tongdiem += 1.5
        elif tmp == '3':
            self.tongdiem += 1.0
    def __str__(self):
        return self.ma + ' ' + self.ten + ' ' + self.mon + ' ' + str(f"{self.tongdiem:.1f}") + ' ' + ('TRUNG TUYEN' if self.tongdiem >= 18 else 'LOAI')
n = int(input())
a = []
for i in range(n):
    ma = 'GV' + f"{i + 1:02d}"
    ten = input()
    maxt = input()
    x = float(input())
    y = float(input())
    a.append(giaovien(ma, ten, maxt, x, y))
a = sorted(a, key = lambda i : -i.tongdiem)
for i in a:
    print(i)
