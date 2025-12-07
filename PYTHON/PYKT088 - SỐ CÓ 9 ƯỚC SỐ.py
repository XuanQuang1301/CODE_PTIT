
def sangNto(n):
    is_pre = [True] * (n + 1)
    is_pre[0] = is_pre[1] = False

    for i in range(2, int(n ** 0.5) + 1):
        if is_pre[i]:
            for j in range(i * i, n + 1, i):
                is_pre[j] = False
    pre = [i for i, val in enumerate(is_pre) if val]
    return pre
def cout_number(n):
    pre = sangNto(int(n ** 0.5) + 1)
    count = 0
    for p in pre:
        if p ** 8 <= n:
            count += 1

    for i in range(len(pre)):
        p = pre[i]
        if p * p >= n:
            break
        for j in range(i + 1, len(pre)):
            q = pre[j]
            if p * p * q * q <= n:
                count += 1
            else: break
    return count
n = int(input())
print(cout_number(n))