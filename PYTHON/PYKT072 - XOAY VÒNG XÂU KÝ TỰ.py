def min_rotation_steps(strings):
    n = len(strings)
    L = len(strings[0])
    for s in strings:
        if len(s) != L:
            return -1

    INF = 10**9
    ans = INF
    s0 = strings[0]

    for r in range(L):
        target = s0[r:] + s0[:r]
        total = 0
        ok = True
        for s in strings:
            doubled = s + s
            pos = doubled.find(target)
            if pos == -1 or pos >= L:  # pos >= L không hợp lệ vì phải trong 0..L-1
                ok = False
                break
            total += pos
        if ok:
            ans = min(ans, total)

    return -1 if ans == INF else ans

# đọc input đơn giản (một test)
N = int(input().strip())
strings = [input().strip() for _ in range(N)]
print(min_rotation_steps(strings))
