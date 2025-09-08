F = [0] * 93
def Fibo():
    F[1] = F[2] = 1
    for i in range(3, 93):
        F[i] = F[i - 1] + F[i - 2]


for case in range(int(input())):
    n, m = map(int, input().split())
    Fibo()
    for i in range(n, m + 1):
        print(F[i], end = " ")
    print()