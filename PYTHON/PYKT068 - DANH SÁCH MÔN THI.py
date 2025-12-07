class monthi:
    def __init__(self, ma, ten, ht):
        self.ma = ma
        self.ten = ten
        self.ht = ht
    def __str__(self):
        return f"{self.ma} {self.ten} {self.ht}"
n = int(input())
a = []
for i in range(n):
    a.append(monthi(input(), input(), input()))
a = sorted(a, key = lambda i: i.ma)
for i in a:
    print(i)
