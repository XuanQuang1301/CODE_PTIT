from datetime import datetime

tg = [0, 25, 34, 50, 80]

class KhachHang :
    def __init__(self, id, ten, phong, ngayDen, ngayDi, phuThu) :
        self.id = f"KH{id:02}"
        self.ten = ten
        self.phong = phong
        self.ngayO = str(datetime.strptime(ngayDi, '%d/%m/%Y') - datetime.strptime(ngayDen, '%d/%m/%Y')).split()[0]
        if self.ngayO == '0:00:00' : self.ngayO = 1
        else : self.ngayO = int(self.ngayO) + 1
        self.tong = tg[int(self.phong[0])] * self.ngayO + phuThu
      
    def __str__(self):
        return self.id + ' ' + self.ten + ' ' + self.phong + ' ' + str(self.ngayO) + ' ' + str(self.tong)

n = int(input())
a = []
for i in range(n):
    a.append(KhachHang(i+1, input(), input(), input().strip(), input().strip(), int(input())))
a.sort(key = lambda k : -k.tong)
print(*a, sep = '\n')
"""
3
Huynh Van Thanh   
103 
05/06/2010   
05/06/2010   
15
Le Duc Cong  
106 
08/03/2010   
01/05/2010   
220
Tran Thi Bich Tuyen   
207 
10/04/2010   
21/04/2010   
96
"""