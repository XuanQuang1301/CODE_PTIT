class NhanVien: 
    def __init__(self, id, ten, lt, th): 
        self.id = 'TS0' + str(id)
        self.ten = ten 
        if lt > 10: lt = lt / 10
        if th > 10: th = th / 10

        self.diem = (lt + th) / 2
        if self.diem < 5: self.xh = "TRUOT"
        elif self.diem < 8: self.xh = "CAN NHAC"
        elif self.diem < 9.5: self.xh = "DAT"
        else: self.xh = "XUAT SAC"
    def __str__(self):
        return f"{self.id} {self.ten} {self.diem:.2f} {self.xh}"
    
n = int(input())
a = []
for i in range(n): 
    ten = input()
    x = float(input())
    y = float(input())
    a.append(NhanVien(i + 1, ten, x, y))
a.sort(key = lambda x : x.diem, reverse = True)
print(*a, sep = '\n')


