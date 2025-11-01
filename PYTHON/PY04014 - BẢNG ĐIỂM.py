from decimal import ROUND_HALF_UP, Decimal

id = 1 

class BangDiem: 
    def __init__(self, ten, diem): 
        global id 
        self.maHS = 'HS' + '{:02d}'.format(id)
        id += 1
        self.ten = ten
        x = 2 * diem[0] + 2 * diem[1]
        for i in range(2, 10): 
            x += diem[i]
        x /= 12

        # Xếp loại
        if x < 5: 
            self.xepLoai = 'YEU'
        elif x < 7: 
            self.xepLoai = 'TB'
        elif x < 8: 
            self.xepLoai = 'KHA'
        elif x < 9: 
            self.xepLoai = 'GIOI'
        else: 
            self.xepLoai = 'XUAT SAC'

        # Làm tròn 1 chữ số thập phân
        self.tongDiem = x.quantize(Decimal('0.1'), ROUND_HALF_UP)

    def output(self): 
        print(self.maHS, self.ten, self.tongDiem, self.xepLoai)

# with open("input.txt", "r", encoding="utf-8") as f:
#     data = f.read().strip().split("\n")

n = int(input())
a = []
for i in range(n) :
    b = input()
    c = [Decimal(x) for x in input().split()]
    a.append(BangDiem(b, c)) 
a.sort(key=lambda x: (-x.tongDiem, x.maHS))
for i in a: 
    i.output()
