def get_band(x):
    if 39 <= x <= 40: return 9.0
    if 37 <= x <= 38: return 8.5
    if 35 <= x <= 36: return 8.0
    if 33 <= x <= 34: return 7.5
    if 30 <= x <= 32: return 7.0
    if 27 <= x <= 29: return 6.5
    if 23 <= x <= 26: return 6.0
    if 20 <= x <= 22: return 5.5
    if 16 <= x <= 19: return 5.0
    if 13 <= x <= 15: return 4.5
    if 10 <= x <= 12: return 4.0
    if 7  <= x <= 9:  return 3.5
    if 5  <= x <= 6:  return 3.0
    if 3  <= x <= 4:  return 2.5
    return 0.0

def round_ielts(x):
    frac = x - int(x)
    if abs(frac - 0.25) < 1e-9:
        return int(x) + 0.5
    if abs(frac - 0.75) < 1e-9:
        return int(x) + 1.0
    # các trường hợp khác: làm tròn tới 0.0 hoặc 0.5 gần nhất
    if frac < 0.25:
        return float(int(x))
    if frac < 0.75:
        return int(x) + 0.5
    return int(x) + 1.0

T = int(input())
for _ in range(T):
    r, l, s, w = input().split()
    r = get_band(int(r))
    l = get_band(int(l))
    s = float(s)
    w = float(w)

    avg = (r + l + s + w) / 4
    print(f"{round_ielts(avg):.1f}")
