n, q = list(map(int, input().split()))
s = input()

for i in range(q):
    l, r = list(map(int, input().split()));
    t = s[l-1:r]
    print(t.count('AC'))
