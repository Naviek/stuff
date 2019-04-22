import sys

def func(s, i):
    if i == 7:
        if eval(s) == 7:
            print(s + '=7')
            sys.exit()
        return
    s = s[:i] + '+' + s[i + 1:]
    func(s, i + 2)
    s = s[:i] + '-' + s[i + 1:]
    func(s, i + 2)

s = input()

a = s[0]
b = s[1]
c = s[2]
d = s[3]
s = a + '#' + b + '#' + c + '#' + d

func(s, 1)
