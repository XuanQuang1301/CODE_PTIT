while True:
    n = int(input())
    if n == 0: break
    arr = [int(input()) for i in range(n)]
    if arr.count(arr[0]) == n:
        print("BANG NHAU")
    else:
        print(min(arr), max(arr))

