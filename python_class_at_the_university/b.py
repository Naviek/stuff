def rec(i):
    if i == n:
        sum = 0
        for i in s:
            sum += i
        if ( sum == 0 ):
            raise AssertionError(s)
        return

    s[i] = l[i]
    rec(i + 1)
    s[i] = -l[i]
    rec(i + 1)

try:
    l = list(map(int, input().split()))
    n = len(l)
    s = [0] * len(l)
    rec(0)
except AssertionError as errMsg:
    print('A zero sum set is', errMsg)
else:
    print("Zero sum set does not exist")
