class TG:
    def __init__(self, ma, ten, gioVao, gioRa): 
        self.ma = ma
        self.ten = ten 
        self.gioRa = gioRa 
        self.gioVao = gioVao 
        self.thoiGian = gioRa[0] * 60 + gioRa[1] - gioVao[0] * 60 - gioVao[1]
    def __str__(self):
        return self.ma + " " + self.ten + " " + str(int(self.thoiGian / 60)) + " gio " + str(self.thoiGian % 60) + " phut"
n = int(input())
a = []
for i in range(n):
    ma = input()
    ten = input()
    gioVao = [int(x) for x in input().split(':')]
    gioRa = [int(x) for x in input().split(':')]
    a.append(TG(ma, ten, gioVao, gioRa))
a.sort(key = lambda x : -x.thoiGian)
print(*a, sep = '\n')
