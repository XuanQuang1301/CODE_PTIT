for _ in range(int(input())):
    n = int(input())
    List = sorted([int(i) for i in input().split()])
    res = 0
    for i in range(n - 2):
        l = i + 1
        r = n - 1
        while(l < r): 
            sum = List[i] + List[l] + List[r]
            if sum == 0: 
                res += 1
                l += 1
            elif sum < 0: 
                l += 1
            else: r -= 1
    print(res)