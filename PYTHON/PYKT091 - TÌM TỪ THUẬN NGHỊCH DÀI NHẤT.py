def check(s):
    tmp = s[::-1]
    if s != tmp:
        return False
    return True
max_size = 0
ans = {}
arr = []
with open("VANBAN.in", "r", encoding = "utf-8") as f:
    arr = f.read().split()
for i in arr:
    if check(i) and len(i) >= max_size:
        max_size = len(i)
for i in arr:
    if check(i) and len(i) == max_size:
        ans[i] = (arr.count(i))
for i in ans:
    print(i, ans[i])

