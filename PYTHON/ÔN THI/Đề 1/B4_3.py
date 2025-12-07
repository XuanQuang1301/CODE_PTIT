import math
class pair:
    def __init__(self, a, b):
        self.a = a
        self.b = b
    def kc(self, x):
        return math.sqrt((self.a - x.a) ** 2 +  (self.b - x.b) ** 2)

for case in range(int(input())):
    arr = [int(s) for s in input().split()]
    A = pair(arr[0], arr[1])
    B = pair(arr[2], arr[3])
    C = pair(arr[4], arr[5])
    AB = A.kc(B)
    BC = B.kc(C)
    AC = A.kc(C)
    if AB + AC <= BC or AB + BC <= AC or BC + AC <= AB:
        print("INVALID")
        continue
    ncv = (AB + BC + AC)
    print(f"{ncv:.6f}")

