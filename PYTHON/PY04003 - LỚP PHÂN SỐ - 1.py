from math import gcd
class PS:
    def __init__(seft, x, y):
        seft.x = x
        seft.y = y
    def distance(seft):
        z = gcd(seft.x, seft.y)
        return str(seft.x // z) + "/" + str(seft.y // z)
def decima(z):
    return int(z)
arr = input().split()
p = PS(decima(arr[0]), decima(arr[1]))
print(p.distance())
