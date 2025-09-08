for _ in range(int(input())):
    n = int(input())
    List = sorted([int(i) for i in input().split()])
    res = 0
    for i in range(n - 2):
        if i > 0 and List[i] == List[i - 1]:
            continue
        
        left, right = i + 1, n - 1
        while left < right:
            tmp = List[i] + List[left] + List[right]
            if not tmp:
                res += 1
                left += 1
                right -= 1
                while left < right and List[left] == List[left - 1]:
                    left += 1
                while left < right and List[right] == List[right + 1]:
                    right -= 1
            elif tmp < 0:
                left += 1
            else:
                right -= 1
    print(res)
    