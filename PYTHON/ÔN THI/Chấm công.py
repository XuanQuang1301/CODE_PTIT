from datetime import datetime
import time
class ChamCong:
    def __init__(self, ma, ten, start, end):
        self.ma = ma
        self.ten = ten
        self.tmp = (datetime.strptime(end, '%H:%M') - datetime.strptime(start, '%H:%M')).seconds / 60
        self.tmp -= 60
        self.gio = self.tmp // 60
        self.phut = self.tmp % 60
        if self.gio < 8:
            self.status = 'THIEU'
        else: self.status = 'DU'
    def __str__(self):
        return self.ma + ' ' + self.ten + ' ' + str(int(self.gio)) + ' gio ' + str(int(self.phut)) + ' phut ' + self.status
a = []
for i in range(int(input())):
    a.append(ChamCong(input(), input(), input(), input()))
a = sorted(a, key = lambda i : -i.tmp)
for i in a:
    print(i)