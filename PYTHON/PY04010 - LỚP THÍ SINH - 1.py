class ThiSinh: 
    tongdiem = 0
    def __init__(self, hoten, ngaysinh, d1, d2, d3): 
        self.hoten = hoten 
        self.ngaysinh = ngaysinh 
        self.d1 = d1
        self.d2 = d2
        self.d3 = d3
        self.tongdiem = d1 + d2 + d3
    def output(self):
        print(self.hoten, self.ngaysinh, "{:.1f}".format(self.tongdiem))

hoten = input()
ngaysinh = input()
d1 = float(input())
d2 = float(input())
d3 = float(input())
ts = ThiSinh(hoten, ngaysinh, d1, d2, d3)
ts.output()

