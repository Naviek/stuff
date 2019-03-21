num = list(map(int, input().split(',')))
num = sorted(num)
num.reverse()

for n in num:
    print(n, end='')
