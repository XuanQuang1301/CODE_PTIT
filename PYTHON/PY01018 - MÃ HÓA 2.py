while True:
    S = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."
    line = input().strip()
    n_a = line.split()
    n = int(n_a[0])
    if(n == 0):
        break
    a = n_a[1]
    tmp = ""
    for i in a:
        for j in range(0, len(S), 1):
            if i == S[j]:
                tmp += S[(j + n) % 28]
    print(tmp[::-1])

