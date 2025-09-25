import math

def get_primes(n):
    is_prime = [True] * (n + 1)
    is_prime[0] = is_prime[1] = False
    for i in range(2, int(n ** 0.5) + 1):
        if is_prime[i]:
            for j in range(i * i, n + 1, i):
                is_prime[j] = False
    return [i for i in range(2, n + 1) if is_prime[i]]

def count_not_divisible(L, R, N):
    primes = get_primes(N)
    m = len(primes)
    divisible = 0
    for mask in range(1, 1 << m):
        lcm = 1
        bits = 0
        ok = True
        for i in range(m):
            if (mask >> i) & 1:
                bits += 1
                g = math.gcd(lcm, primes[i])
                lcm = lcm // g * primes[i]  # tránh tràn số
                if lcm > R:  # nếu LCM quá lớn thì bỏ
                    ok = False
                    break
        if not ok:
            continue
        cnt = R // lcm - (L - 1) // lcm
        if bits % 2 == 1:
            divisible += cnt
        else:
            divisible -= cnt

    return (R - L + 1) - divisible
while True:
    line = input().strip()
    if line == "-1":
        break
    L, R = map(int, line.split())
    N = int(input().strip())
    print(count_not_divisible(L, R, N))
