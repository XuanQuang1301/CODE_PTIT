def chuyendoi(b, s):
    k = {16: 4, 8: 3, 4: 2, 2: 1}[b]
    if len(s) % k != 0:
        s = '0' * (k - len(s) % k) + s

    result = []
    for i in range(0, len(s), k):
        v = int(s[i:i + k], 2)
        if v < 10:
            result.append(chr(ord('0') + v))
        else:
            result.append(chr(ord('A') + v - 10))
    return ''.join(result)


with open('DATA2.in', 'r') as f:
    t = int(f.readline().strip())
    for _ in range(t):
        b = int(f.readline().strip())
        s = f.readline().strip()
        print(chuyendoi(b, s))
