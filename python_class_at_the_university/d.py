a = []
while True:
    a.append(input())
    if a[-1] == '0':
        break

a.pop(-1)
i = 0
for s in a:
    i += 1
    print('Case', str(i) + ':', s)
