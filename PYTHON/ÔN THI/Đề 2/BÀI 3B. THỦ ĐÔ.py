import json
def dict(s):
    if s == {}:
        return ([], 0, 0)
    A =  json.loads(s)
    arr = []
    sum_qg = 0
    sum_td = 0
    for k, v in A.items():
        if len(v) > 0 and v[0].lower() in {'a', 'e', 'i', 'o', 'u'}:
            arr.append(k)
        if len(k) > 5:
            sum_qg += 1
        if len(v) < 6:
            sum_td += 1
    return (arr, sum_qg, sum_td)
for case in range(int(input())):
    s = input().strip()
    print(dict(s))
"""
4 
{"Vietnam": "Hanoi", "USA": "Washington", "Canada": "Ottawa", "India": "New Delhi"} 
{"Germany": "Berlin", "France": "Paris", "Italy": "Rome"} 
{"Japan": "Tokyo", "South Korea": "Seoul", "China": "Beijing"} 
{"Russia": "Moscow", "Spain": "Madrid"}
"""