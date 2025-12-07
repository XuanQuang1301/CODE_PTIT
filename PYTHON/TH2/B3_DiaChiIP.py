def check(s):
    a = s.split('.')
    if len(a) != 4:
        return False
    for item in a:
        if item.isdigit():
            if int(item) < 0 or int(item) > 255: return False
        else: return False
    return True

if __name__ == '__main__':
    t = int(input())
    for u in range(t):
        s = input()
        if check(s): print("YES")
        else: print("NO")