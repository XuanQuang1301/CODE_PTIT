import csv
import os

path = os.path.join(os.path.dirname(_file_), 'penguins.csv')

def load_data():
    data = []
    with open(path, 'r') as f:
        reader = csv.DictReader(f)
        for row in reader:
            data.append(row)
    return data

if _name__=='__main_':
    data = load_data()

    for _ in range(int(input())):
        s, isl = input().split()
        length = [float(val["bill_length_mm"]) for val in data if val["species"] == s and val["island"] == isl]
        depth = [float(val["bill_depth_mm"]) for val in data if val["species"] == s and val["island"] == isl]
        if not length or not depth:
            print("Invalid")
            continue
        l1 = sum(length)/len(length)
        d1 = sum(depth)/len(depth)
        print(f'{l1:.4f} {d1:.4f}')