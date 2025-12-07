from collections import deque

for _ in range(int(input())):
    n = int(input())

    q = deque()
    q.append(("9", 9 % n))
    visited = set()
    visited.add(9 % n)

    while q:
        num_str, mod = q.popleft()

        if mod == 0:
            print(num_str)
            break
        new_mod = (mod * 10) % n
        if new_mod not in visited:
            visited.add(new_mod)
            q.append((num_str + "0", new_mod))
        new_mod = (mod * 10 + 9) % n
        if new_mod not in visited:
            visited.add(new_mod)
            q.append((num_str + "9", new_mod))
