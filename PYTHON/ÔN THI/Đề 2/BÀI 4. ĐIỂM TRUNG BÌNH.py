class sinhvien:
    def __init__(self, ten, ngaysinh, x, y, z):
        self.ten = ten
        self.ngaysinh = ngaysinh
        self.tongdiem = (min(x, y, z) + x + y + z) / 4
    def __str__(self):
        return self.ten + ' ' + self.ngaysinh + ' ' + f"{self.tongdiem:.1f}"
n = int(input())
arr = []
for case in range(n):
    arr.append(sinhvien(input(), input(), float(input()), float(input()), float(input())))
arr = sorted(arr, key = lambda i : -i.tongdiem)
for i in arr:
    print(i)