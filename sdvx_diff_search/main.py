import csv

s = input().lower()

with open("lv17.csv") as f:
    data = []
    for row in csv.reader(f):
        data.append(row)

data2 = [list(col) for col in zip(*data)]

cnt = 0
ans = []

for line in data2:
    for e in line[1:]:
        if s in e.lower():
            cnt += 1
            ans.append([line[1], e]);

if (cnt == 0):
    print("not found")
else:
    for e in ans:
        print(e[0], e[1])
    
