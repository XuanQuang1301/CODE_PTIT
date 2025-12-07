class bd:
    def __init__(self, ten, x, y, z):
        self.ten = ten
        self.x = x
        self.y = y
        self.z = z
    def __str__(self):
        return self.ten + " " + str(self.x) + " " + str(self.y) + " " + str(self.z)
a = []
for i in range(int(input())):
    ten = input()
    x, y, z = [int(j) for j in input().split()]
    a.append(bd(ten, x, y, z))
a = sorted(a, key = lambda i : (-i.x, -i.y, -i.z))
for i in a:
    print(i)
