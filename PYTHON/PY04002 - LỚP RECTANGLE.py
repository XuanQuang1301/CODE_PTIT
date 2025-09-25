import sys
class Rectangle:
    def __init__(self, x, y, c):
        self.x = x
        self.y = y
        self.c = c
    def perimeter(self):
        return (self.x + self.y) * 2
    def area(self):
        return self.x * self.y
    def color(self):
        return self.c.lower().title()
arr = input().split()
if (int(arr[0]) > 0 and int(arr[1]) > 0):
    r = Rectangle(int(arr[0]), int(arr[1]), str(arr[2]))
    print('{} {} {}'.format(r.perimeter(), r.area(), r.color()))
else:
    print('INVALID')
sys.exit()
if __name__ == '__main__':
    arr = input().split()
    r = Rectangle(int(arr[0]), int(arr[1]), int(arr[2]))
    print('{} {} {}'.format(r.perimeter(), r.area(), r.color()))