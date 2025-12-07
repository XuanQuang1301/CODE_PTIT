
for case in range(int(input())):
    x = [int(i) for i in input().split()]
    y = [int(i) for i in input().split()]
    if len(x) != len(y):
        print('INVALID')
        continue
    set_x = set(x)
    set_y = set(y)
    intersection = len(set_x & set_y)
    union = len(set_x | set_y)
    print(f"{(intersection / union):.5f}")


