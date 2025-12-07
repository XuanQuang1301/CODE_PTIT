import sys
import math
ranges = [
    (39, 40, 9.0),
    (37, 38, 8.5),
    (35, 36, 8.0),
    (33, 34, 7.5),
    (30, 32, 7.0),
    (27, 29, 6.5),
    (23, 26, 6.0),
    (20, 22, 5.5),
    (16, 19, 5.0),
    (13, 15, 4.5),
    (10, 12, 4.0),
    (7, 9, 3.5),
    (5, 6, 3.0),
    (3, 4, 2.5),
]

def correct_to_band(c):
    c = int(c)
    for lo, hi, band in ranges:
        if lo <= c <= hi:
            return band
    return 1.0

def round_ielts(avg):
    integer = math.floor(avg)
    frac = avg - integer
    if frac < 0.25:
        return float(integer)
    elif frac < 0.75:
        return integer + 0.5
    else:
        return float(integer + 1)

def main():
    data = sys.stdin.read().strip().split()
    if not data:
        return
    t = int(data[0])
    idx = 1
    outputs = []
    for _ in range(t):
        if idx + 3 >= len(data):
            break
        r_corr = data[idx]; idx += 1
        l_corr = data[idx]; idx += 1
        spk = float(data[idx]); idx += 1
        wri = float(data[idx]); idx += 1

        r_band = correct_to_band(r_corr)
        l_band = correct_to_band(l_corr)
        avg = (r_band + l_band + spk + wri) / 4.0
        overall = round_ielts(avg)
        outputs.append(f"{overall:.1f}")

    print("\n".join(outputs))

if __name__ == "__main__":
    main()
