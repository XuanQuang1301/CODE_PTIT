s = input()
Lower = 0
Upper = 0
for i in s:
    if i.islower():
        Lower += 1
    else:
        Upper += 1
if Lower >= Upper:
    print(s.lower())
else:
    print(s.upper())