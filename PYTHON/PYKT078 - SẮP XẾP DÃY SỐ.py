
for case in range(int(input())):
    n, m = map(int, input().split())
    arr = [int(x) for x in input().split()]
    max_ans = max(arr)
    for i in range(n):
        if arr[i] == max_ans:
            arr.insert(i, m)
            break
    arr1 = [x for x in arr if x < 0]
    arr2 = [x for x in arr if x >= 0]
    arr = arr1 + arr2
    print(" ".join(map(str, arr)))