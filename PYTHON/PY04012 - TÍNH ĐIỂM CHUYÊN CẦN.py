class SinhVien:
    def __init__(self, ma, ten, lop) -> None:
        self.ma = ma
        self.ten = ten
        self.lop = lop
    def cal(self, s: str):
        m = s.count('m')
        v = s.count('v')
        self.cc = max(0, 10 - m - v * 2)
    def __str__(self):
        return self.ma + ' ' + self.ten + ' ' + self.lop + ' ' + str(self.cc) + ' ' + ('KDDK' if self.cc == 0 else '')
a = {}
n = int(input())
for i in range(n):
    ma = input()
    ten = input()
    lop = input()
    sv = SinhVien(ma, ten, lop)
    a[sv.ma] = sv
for i in range(n):
    msv, s = input().split()
    a[msv].cal(s)
for i in a:
    print(a[i])
