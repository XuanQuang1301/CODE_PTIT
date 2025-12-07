import json

with open("flights.json", "r") as f:
    data = json.load(f)
flights = data["flights"]
by_year = {}
for flight in flights:
    year = int(flight["year"])
    total = int(flight["passengers"])
    if year not in by_year:
        by_year[year] = []
    by_year[year].append(total)
for case in range(int(input())):
    year, chiso = map(str, input().split())
    year = int(year)
    if year not in by_year:
        print('INVALID')
        continue
    if chiso == 'sum':
        print(sum(by_year[year]))
    elif chiso == 'avg':
        print(f"{sum(by_year[year]) / len(by_year[year]):.5f}")
    elif chiso == 'min':
        print(min(by_year[year]))
    elif chiso == 'max':
        print(max(by_year[year]))