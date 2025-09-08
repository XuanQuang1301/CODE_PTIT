import re

s = ''
while True:
    try:
        s += input() + " "
    except EOFError:
        break

sentences = re.split(r'[.!?]', s)

for sentence in sentences:
    x = sentence.lower().split()
    if not x: 
        continue
    x[0] = x[0].title()
    print(*x)
