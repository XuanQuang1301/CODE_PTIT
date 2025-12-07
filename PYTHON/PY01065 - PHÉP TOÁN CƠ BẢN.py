def match(x, p):
    """Kiểm tra số x (2 chữ số) có khớp với pattern p (dấu ? hay chữ số)"""
    s = f"{x:02d}"
    if len(p) != len(s):
        return False
    for a, b in zip(p, s):
        if a != '?' and a != b:
            return False
    return True


def solve_one(expr):
    # Tách biểu thức
    parts = expr.split()
    if len(parts) != 5 or parts[3] != '=':
        return "WRONG PROBLEM!"

    A_pat, op_pat, B_pat, _, C_pat = parts
    ops = ['+', '-', '*', '/']

    for a in range(10, 100):
        if not match(a, A_pat):
            continue
        for b in range(10, 100):
            if not match(b, B_pat):
                continue
            for op in ops:
                if op_pat != '?' and op_pat != op:
                    continue
                if op == '+':
                    c = a + b
                elif op == '-':
                    c = a - b
                elif op == '*':
                    c = a * b
                else:  # '/'
                    if b == 0 or a % b != 0:
                        continue
                    c = a // b

                if c < 10 or c > 99:
                    continue
                if not match(c, C_pat):
                    continue
                return f"{a:02d} {op} {b:02d} = {c:02d}"

    return "WRONG PROBLEM!"


def main():
    t = int(input().strip())
    for _ in range(t):
        expr = input().strip()
        print(solve_one(expr))


if __name__ == "__main__":
    main()
