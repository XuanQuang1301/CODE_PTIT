class hoadon:
    def __init__(self, ma, ten, sl, dongia, chietkhau):
        self.ma = ma
        self.ten = ten
        self.sl = sl
        self.dongia = dongia
        self.chietkhau = chietkhau
        self.tongtien = sl * dongia - chietkhau
    def __str__(self):
        return self.ma + ' ' + self.ten + ' ' + str(int(self.sl)) + ' ' + str(int(self.dongia)) + ' ' + str(int(self.chietkhau)) + ' ' + str(int(self.tongtien))
n = int(input())
arr = []
for i in range(n):
    arr.append(hoadon(input(), input(), int(input()) , int(input()), int(input())))
arr = sorted(arr, key = lambda i : -i.tongtien)
for i in arr:
    print(i)
