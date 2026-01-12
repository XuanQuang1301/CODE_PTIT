import csv
import os

path = os.path.join(os.path.dirname(_file_), 'iris.csv')


def load_data():
    data = []
    with open(path, 'r') as f:
        reader = csv.DictReader(f)
        for i in reader:
            data.append(i)
    return data


if _name_ == '_main_':
    data = load_data()

    valid_fields = ['sepal_length', 'sepal_width', 'petal_length', 'petal_width']

    species = []
    for i in data:
        if i["species"] != '':
            species.append(i['species'])

    for _ in range(int(input())):
        a, b, c = input().split()

        if a not in species or b not in valid_fields:
            print("Invalid")
            continue

        values = [float(sp[b]) for sp in data if sp["species"] == a]

        if c == 'max':
            res = max(values)
            print(f'{res:.2f}' if res != int(res) else int(res))
        elif c == 'min':
            res = min(values)
            print(f'{res:.2f}' if res != int(res) else int(res))
        elif c == 'sum':
            res = sum(values)
            print(f'{res:.2f}' if res != int(res) else int(res))
        elif c == 'avg':
            res = sum(values) / len(values)
            print(f'{res:.2f}' if res != int(res) else int(res))
        else:
            print("Invalid")