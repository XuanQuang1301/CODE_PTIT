import sys

for lines in sys.stdin:
    for word in lines.split():
        print(word)
