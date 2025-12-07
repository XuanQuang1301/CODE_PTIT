n = int(input())
a = list(map(int, input().split()))

a.sort()
max1, max2, max3 = a[-1], a[-2], a[-3]
min1, min2 = a[0], a[1]
max2_product = max(max1 * max2, min1 * min2)
max3_product = max(max1 * max2 * max3, max1 * min1 * min2)
print(max(max2_product, max3_product))
