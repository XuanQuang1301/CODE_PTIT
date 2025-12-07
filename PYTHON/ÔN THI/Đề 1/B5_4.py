def Try(many, k):
    if k <= 2:
        if many < 1000000000:
            return 2.5
        elif many <= 3000000000:
            return 2.7
        else:
            return 2.8
    elif k <= 6:
        if many < 1000000000:
            return 3.9
        elif many <= 3000000000:
            return 4.1
        else:
            return 4.3
    elif k <= 12:
        if many < 1000000000:
            return 4.8
        elif many <= 3000000000:
            return 4.9
        else:
            return 5.0
    elif k <= 36:
        if many < 1000000000:
            return 4.8
        elif many <= 3000000000:
            return 5.0
        else:
            return 5.1
    else:
        if many < 1000000000:
            return 4.7
        elif many <= 3000000000:
            return 4.9
        else:
            return 5.0

many = int(input())
k = int(input())
sum = many * (Try(many, k) / 12) * k
print(sum)