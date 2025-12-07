class thisinh:
    def __init__(self, ten, ngaysinh, x, y, z):
        self.ten = ten
        self.ngaysinh = ngaysinh
        self.tong = x + y + z + min(x, min(y, z))
        self.tong /= 4

    def __str__(self):
        return f"{self.ten} {self.ngaysinh} {self.tong:.1f}"
n = int(input())
a = []
for case in range(n):
    a.append(thisinh(input(), input(), float(input()), float(input()), float(input())))
a = sorted(a, key = lambda i: -i.tong)
for i in a:
    print(i)
