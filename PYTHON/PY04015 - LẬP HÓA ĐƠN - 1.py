class HoaDon: 
    def __init__(self, id, ten, socu, somoi): 
        self.id = f"KH{id:02}"
        self.ten = ten
        self.socu = socu
        self.somoi = somoi 
        self.tong = self.somoi - self.socu
        if(self.tong <= 50): 
            self.tong = (self.tong * 100) * 1.02
        elif self.tong <= 100: 
            self.tong = ((50 * 100) + (self.tong - 50) * 150) * 1.03
        else:
            self.tong = ((50 * 100) + (50 * 150) + (self.tong - 100) * 200) * 1.05
        self.tong = round(self.tong)
    def __str__(self): 
        return f"{self.id} {self.ten} {(self.tong)}"
    
n = int(input())
a = []
for i in range(n): 
    ten = input()
    socu = int(input())
    somoi = int(input())
    a.append(HoaDon(i + 1, ten, socu, somoi))
a.sort(key = lambda x : (-x.tong)) 
print(*a, sep = '\n')       
"""       
3
Le Thi Thanh
468
500
Le Duc Cong
160
230
Ha Hue Anh
410
612
"""