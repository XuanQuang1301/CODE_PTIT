
def main():
    with open("input.txt", "r") as f:
        data = f.read().strip().splitlines()
    n = int(data[0])
    arr = []
    for i in range(1, n + 1):
        arr.append(list(map(int, data[i].split())))
    k = int(data[n + 1])

    sum1, sum2 = 0, 0
    for i in range(n):
        for j in range(n):
            if j < n - i - 1:
                sum1 += arr[i][j]
            if j > n - i - 1:
                sum2 += arr[i][j]

    diff = abs(sum1 - sum2)
    if diff <= k:
        print("YES")
    else:
        print("NO")
    print(diff)


if __name__ == "__main__":
    main()

"""
5
2 8 10 6 7
6 3 2 6 9
10 2 6 2 8
9 9 7 9 8
9 6 5 6 9
5
"""