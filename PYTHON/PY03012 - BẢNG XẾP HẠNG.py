class SinhVien: 
    def __init__(self, ten, baidung, submit): 
        self.ten = ten 
        self.baidung = baidung 
        self.submit = submit 
    def __str__(self):
        return f"{self.ten} {self.baidung} {self.submit}"
n = int(input())
a = []
for i in range(n):
    ten = input()
    baidung, submit = [int(i) for i in input().split()]
    a.append(SinhVien(ten, baidung, submit))
a.sort(key = lambda x : (-x.baidung, x.submit, x.ten))
print(*a, sep = '\n')
"""
2
Nguyen Van Nam
168 600
Tran Thi Ngoc
168 600
"""