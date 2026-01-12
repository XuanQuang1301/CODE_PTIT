def sangNT(n):
    is_pre = [True] * (n + 1)
    is_pre[0] = is_pre[1] = False

    for i in range(2, int(n ** 0.5) + 1):
        if is_pre[i]:
            for j in range(i * i, n + 1, i):
                is_pre[j] = False
    pre = [i for i, val in enumerate(is_pre) if val]
    return pre
def count_num(n):
    pre = sangNT(int(n ** 0.5) + 1)
    count = 0
    for i in pre:
        if i ** 8 <= n:
            count += 1
    for i in range(len(pre)):
        q = pre[i]
        if q * q >= n: break
        for j in range(i + 1, len(pre)):
            p = pre[j]
            if q * q * p * p <= n: count += 1
            else: break
    return count
n = int(input())
print(count_num(n))