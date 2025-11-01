def check(s1, s2): 
    for i in range(len(s1)): 
        if s1[i] != s2[i]: 
            return False
    return True

for case in range(int(input())):
    s1 = sorted(input().strip())   # đọc xâu và sắp xếp ký tự
    s2 = sorted(input().strip())
    print("Test " + str(case + 1) + ": ", end="")
    print("YES" if check(s1, s2) else "NO")
