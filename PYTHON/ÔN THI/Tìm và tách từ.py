
for case in range(int(input())):
    a = input().lower().split()
    b = input().split()
    for i in b:
        if a.count(i.lower()):
            print(i, end = ' ')
    print()