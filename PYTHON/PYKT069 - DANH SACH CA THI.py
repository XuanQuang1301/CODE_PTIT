from datetime import datetime

class cathi:
    def __init__(self, ma, ngay, gio, phong):
        self.ma = ma
        self.ngay = ngay
        self.gio = gio
        self.phong = phong
        self.time = datetime.strptime(ngay + " " + gio, "%d/%m/%Y %H:%M")
    def __str__(self):
        return f"{self.ma} {self.ngay} {self.gio} {self.phong}"
with open("CATHI.in", "r", encoding = 'utf-8') as f:

    n = int(int(f.readline()))
    ds = []
    for i in range(1, n + 1):
        ma = f"C{i:03d}"
        ngay = f.readline().strip()
        gio = f.readline().strip()
        phong = f.readline().strip()
        ds.append(cathi(ma, ngay, gio, phong))
    ds.sort(key = lambda d : (d.time, d.ma))
    for i in ds:
        print(i)
