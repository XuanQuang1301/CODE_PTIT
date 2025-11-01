n, m = map(int, input().split())
votes = []
while len(votes) < n:
    votes += list(map(int, input().split()))
votes = votes[:n]
count = [0] * (m + 1)
for v in votes:
    count[v] += 1

unique_nonzero = sorted(set(c for c in count[1:] if c > 0), reverse=True)

if len(unique_nonzero) < 2:
    print("NONE")
else:
    second_max = unique_nonzero[1]
    for i in range(1, m + 1):
        if count[i] == second_max:
            print(i)
            break
