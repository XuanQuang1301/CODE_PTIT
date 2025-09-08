s = input()
n_val = 0
m_val = 0
for i in range(len(s)):
    if int(s[i]) == 4:
        n_val += 1
    if int(s[i]) == 7:
        m_val += 1
if n_val + m_val == 7 or n_val + m_val == 4:
    print("YES")
else:
    print("NO")