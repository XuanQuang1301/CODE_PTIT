import pickle
from collections import Counter

def is_non_decreasing(n: int) -> bool:
    s = str(n)
    if len(s) < 2:
        return False
    for i in range(1, len(s)):
        if s[i] < s[i - 1]:
            return False
    return True

with open("DATA1.in", "rb") as f1, open("DATA2.in", "rb") as f2:
    a1 = pickle.load(f1)
    a2 = pickle.load(f2)

cnt1 = Counter(x for x in a1 if is_non_decreasing(x))
cnt2 = Counter(x for x in a2 if is_non_decreasing(x))

common = sorted(set(cnt1.keys()) & set(cnt2.keys()))

for x in common:
    print(x, cnt1[x], cnt2[x])
