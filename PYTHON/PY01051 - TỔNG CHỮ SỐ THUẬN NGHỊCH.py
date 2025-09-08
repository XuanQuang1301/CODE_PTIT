def check(s):
    if len(s) <= 1 or s != s[::-1]:
        return False
    return True
for _ in range(int(input())):
    s = input()
    sum = 0
    for i in s:
        sum += int(i)

    if check(str(sum)):
        print("YES")
    else:
        print("NO")
