from math import gcd
class PS:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    def sum(self, other):
        a = self.x * other.y + self.y * other.x
        b = self.y * other.y
        z = gcd(a, b)
        return str(a // z) + "/" + str(b // z)
def decima(x):
    return int(x)
arr = input().split()
a = PS(decima(arr[0]), decima(arr[1]))
b = PS(decima(arr[2]), decima(arr[3]))
print(a.sum(b))