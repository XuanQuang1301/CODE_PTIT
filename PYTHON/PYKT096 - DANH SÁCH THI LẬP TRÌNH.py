
class team:
    def __init__(self, code, name, school):
        self.code = code
        self.name = name
        self.school = school
class thisinh:
    def __init__(self, code, name, mateam, o):
        self.code = code
        self.name = name
        self.mateam = mateam
        self.o = o
    def __str__(self):
        return f"{self.code} {self.name} {self.o.name} {self.o.school}"
n = int(input())
m = {}
for i in range(n):
    code = "Team" + f"{i + 1:02d}"
    name = input().strip()
    school = input().strip()
    m[code] = team(code, name, school)
k = int(input())
arr = []
for i in range(k):
    code = "C" + f"{i + 1:03d}"
    name = input().strip()
    mateam = input().strip()
    arr.append(thisinh(code, name, mateam, m[mateam]))
arr = sorted(arr, key = lambda i : i.name)
for i in arr: print(i)
