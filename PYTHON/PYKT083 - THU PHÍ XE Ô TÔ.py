tu_dien = dict()
n = int(input())
for _ in range(n):
    data = input().split()
    res = data[len(data) - 1]
    if tu_dien.get(res) == None:
        tu_dien[res] = 0
    if data[3] == "OUT":
        continue
    else:
        if data[1] == 'Xe_con' and data[2] == '5':
            tu_dien[res] += 10000
        elif data[1] == 'Xe_con' and data[2] == '7':
            tu_dien[res] += 15000
        elif data[1] == 'Xe_tai' and data[2] == '2':
            tu_dien[res] += 20000
        elif data[1] == 'Xe_khach' and data[2] == '29':
            tu_dien[res] += 50000
        elif data[1] == 'Xe_khach' and data[2] == '45':
            tu_dien[res] += 70000

for item in tu_dien:
    print(item + ":", tu_dien[item])