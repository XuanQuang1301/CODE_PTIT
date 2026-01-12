from math import*
eps = 1e-9
def tam(A,B,C):
    (x1,y1),(x2,y2),(x3,y3)=A,B,C
    d = 2*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))
    if abs(d)<eps:
        return None
    ox = ((x1**2+y1**2)*(y2-y3)+
          (x2**2+y2**2)*(y3-y1)+
          (x3**2+y3**2)*(y1-y2))/d
    oy = ((x1**2+y1**2)*(x3-x2)+
          (x2**2+y2**2)*(x1-x3)+
          (x3**2+y3**2)*(x2-x1))/d
    return (ox,oy)
for _ in range(int(input())):
    n = int(input())
    k = int(input())
    p = [tuple(map(int,input().split())) for _ in range(n)]
    found = False
    for i in range(n):
        for j in range(i+1,n):
            for h in range(j+1,n):
                O = tam(p[i],p[j],p[h])
                if O is None:
                    continue

                r = dist(p[i],O)
                cnt = sum(1 for pi in p if dist(O,pi)<r-eps)
                if cnt==k:
                    found = True
                    break
            if found:
                break
        if found:
            break
    print("YES" if found else "NO")