import sys
input = sys.stdin.readline

N, Q = map(int, input().split())
diff = [0] * (N + 2)

for _ in range(Q):
    x, y = map(int, input().split())
    diff[x] ^= 1
    if y + 1 <= N:
        diff[y + 1] ^= 1

ans = []
curr = 0
for i in range(1, N + 1):
    curr ^= diff[i]
    ans.append(str(curr))

print(" ".join(ans))
"""
3 2
1 2
1 3
"""