def Result(n, m):
    if m == 1:
        if n < 20:
            return "Ma Ket"
        else:
            return "Bao Binh"
    elif m == 2:
        if n <= 18:
            return "Bao Binh"
        else:
            return "Song Ngu"
    elif m == 3:
        if n <= 20:
            return "Song Ngu"
        else:
            return "Bach Duong"
    elif m == 4:
        if n <= 19:
            return "Bach Duong"
        else:
            return "Kim Nguu"
    elif m == 5:
        if n <= 20:
            return "Kim Nguu"
        else:
            return "Song Tu"
    elif m == 6:
        if n <= 20:
            return "Song Tu"
        else:
            return "Cu Giai"
    elif m == 7:
        if n <= 22:
            return "Cu Giai"
        else:
            return "Su Tu"
    elif m == 8:
        if n <= 22:
            return "Su Tu"
        else:
            return "Xu Nu"
    elif m == 9:
        if n <= 22:
            return "Xu Nu"
        else:
            return "Thien Binh"
    elif m == 10:
        if n <= 22:
            return "Thien Binh"
        else:
            return "Thien Yet"
    elif m == 11:
        if n <= 22:
            return "Thien Yet"
        else:
            return "Nhan Ma"
    elif m == 12:
        if n <= 21:
            return "Nhan Ma"
        else:
            return "Ma Ket"
        
for _ in range(int(input())):
    n, m = map(int, input().split())
    print(Result(n, m))

    