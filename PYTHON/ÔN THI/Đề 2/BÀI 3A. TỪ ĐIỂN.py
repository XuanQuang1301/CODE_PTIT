import json

def solve_dict(s):
    # Chuẩn hóa dấu ngoặc kép
    s = s.replace("“", '"').replace("”", '"')
    # Dict rỗng
    if s.strip() == "{}":
        return ([], 0, 0)
    # Convert sang dict
    A = json.loads(s)

    even_keys = []
    sum_numbers = 0
    count_strings = 0

    for k, v in A.items():
        if isinstance(v, int):
            sum_numbers += v
            if v % 2 == 0:
                even_keys.append(k)
        if isinstance(v, str):
            count_strings += 1

    return (even_keys, sum_numbers, count_strings)


t = int(input())
for _ in range(t):
    line = input().strip()
    print(solve_dict(line))
"""
5
{“a”: 2, “b”: 3, “c”: “hello”, “d”: 4}
{“x”: 10, “y”: 20, “z”: “world”}
{“key1”: 1, “key2”: 5, “key3”: “python”}
{“p”: “test”, “q”: “code”, “r”: 0}
{}
"""