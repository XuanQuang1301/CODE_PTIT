def check(s):
    if len(s) < 6 or len(s) > 12:
        return False
    chuthuong = 0
    chuhoa = 0
    chuso = 0
    db = 0
    for i in s:
        if i >= 'a' and i <= 'z':
            chuthuong += 1
        elif i >= 'A' and i <= 'Z':
            chuhoa += 1
        elif i >= '0' and i <= '9':
            chuso += 1
        elif i in {'$', '#', '@', '!'}:
            db += 1
    if chuthuong == 0 or chuhoa == 0 or chuso == 0 or db == 0:
        return False
    return True
arr = input().split(',')
ok = False
for s in arr:
    s = s.strip()
    if check(s):
        print(s)
        ok = True
if ok == False: print('INVALID PASSWORD')
