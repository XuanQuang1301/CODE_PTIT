arr = []
with open('CONTACT.in', 'r', encoding = 'utf-8') as f:
    for line in f:
        val = line.strip().lower()
        if len(val) > 0:
            arr.append(val)
arr = set(arr)
for i in sorted(arr):
    print(i)
