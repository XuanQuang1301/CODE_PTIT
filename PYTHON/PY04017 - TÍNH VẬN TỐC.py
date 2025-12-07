from datetime import datetime
import math
class DuaXe:
    def __init__(self, ten, dv, end):
        self.ten = ten
        self.dv = dv
        self.time = (datetime.strptime(end, '%H:%M') - datetime.strptime('6:00', '%H:%M')).seconds/3600
        self.v = 120/(self.time)
        self.code = ''
        for i in dv.split(): self.code += i[0].upper()
        for i in ten.split(): self.code += i[0].upper()
    def __str__(self) -> str:
        return self.code + ' ' + self.ten + ' ' + self.dv + ' ' + f'{round(self.v)} Km/h'

a = []
for i in range(int(input())): a.append(DuaXe(input(), input(), input()))
for i in sorted(a, key = lambda x : x.time): print(i)
