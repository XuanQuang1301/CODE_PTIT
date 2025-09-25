class Matrix:
    def __init__(self, n, m, data):
        self.n = n
        self.m = m
        self.data = data

    def mul_transpose(self):
        res = [[0] * self.n for _ in range(self.n)]
        for i in range(self.n):
            for j in range(self.n):
                s = 0
                for k in range(self.m):
                    s += self.data[i][k] * self.data[j][k]
                res[i][j] = s
        return res


if __name__ == "__main__":
    import sys
    e = list(map(int, sys.stdin.read().strip().split()))
    T = e[0]
    I = 1
    for _ in range(T):
        n, m = e[I], e[I + 1]
        I += 2

        data = []
        for i in range(n):
            row = e[I:I + m]
            I += m
            data.append(row)

        mat = Matrix(n, m, data)
        res = mat.mul_transpose()

        for row in res:
            print(*row)