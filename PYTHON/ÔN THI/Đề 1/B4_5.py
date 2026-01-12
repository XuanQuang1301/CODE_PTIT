import json
with open('flights.json', 'r') as f:
    data = json.load(f)
flights = data["flights"]
arr = {}
for flight in flights:
    year = int(flight["year"])
    passe =  int(flight["passengers"])
    if year not in arr:
        arr[year] = []
    arr[year].append(passe)
for case in range(int(input())):
    year, s = map(str, input().split())
    year = int(year)
    if s == 'sum':
        print(sum(arr[year]))
    elif s == 'min':
        print(min(arr[year]))
    elif s == 'max':
        print(max(arr[year]))
    elif s == 'avg':
        print(sum(arr[year]) / len(arr[year]))