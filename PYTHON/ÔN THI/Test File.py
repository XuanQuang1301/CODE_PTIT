a = []
with open('in.txt', 'r', encoding = 'utf-8') as f:
    line = f.readline().split()
with open('out.txt', 'w', encoding = 'utf-8') as f:
    for i in line:
        f.write(i)
