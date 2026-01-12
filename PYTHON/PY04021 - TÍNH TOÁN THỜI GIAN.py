from datetime import datetime

class thoigian:
    def __init__(self, code, ten, giovao, giora):
        self.code = code
        self.ten = ten
        self.sum = (datetime.strptime(giora, '%H:%M') - datetime.strptime(giovao, '%H:%M')).seconds / 60
        self.gio = self.sum // 60
        self.phut = self.sum % 60
    def __str__(self):
        return self.code + ' ' + self.ten + ' ' + str(int(self.gio)) + ' gio ' + str(int(self.phut)) + ' phut'
n = int(input())
arr = []
for i in range(n):
    arr.append(thoigian(input(), input(), input(), input()))
arr = sorted(arr, key = lambda i : -i.sum)
for i in arr: print(i)
