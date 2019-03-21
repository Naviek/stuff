l = [1, 2, 3]
n = len(l)
s = [0] * len(l)

def rec(i):
    if i == n:
        sum = 0
        for i in s:
            sum += i
        if ( sum == 0 ):
            print(s)
        return

    s[i] = l[i]
    rec(i + 1)
    s[i] = -l[i]
    rec(i + 1)

rec(0)
