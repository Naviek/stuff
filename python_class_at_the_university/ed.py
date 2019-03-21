import re
curN = 0
flag = True
prompt = '' 
help_desc = (
        '\n'
        '=====================Available Commands=====================\n'
        ' a: appends text to buffer\n'
        ' p: prints the addressed line\n'
        ' n: prints the addressed line with line number\n'
        ' h: shows help\n'
        ' q: quits\n'
        ' d: deletes the addressed line\n'
        ' r: reads file and appends it after the addressed line\n'
        ' w: writes addressed line to file\n'
        ' P: toggles the command prompt\n'
        '============================================================\n'
        )

class LineEditor(object):
    def __init__(self):
        self.texts = ['']
        self.numLines = 0

    def addStrAtN(self, n, a_str):
        self.texts.insert(n, a_str)

    def getStrAtN(self, n):
        n = int(n)
        return self.texts[n]

    def delStrAtN(self, n):
        self.texts.pop(n)

    def getList(self):
        return self.texts

def setNumAndCom(in_str):
    com = re.search(r'[a-zA-Z]+', in_str)
    try:
        if com.start() != 0:
            position = in_str[:com.start()].split(',')
            try:
                return position[0], position[1], com.group()
            except IndexError:
                return position[0], position[0], com.group()
        else:
            return 'n/a', 'n/a', com.group()
    except AttributeError:
        return 'n/a', 'n/a', 'noCommand'

def analyzeCommand(in_str, le):
    global curN
    global flag
    global prompt

    if curN >= len(le.getList()): curN = len(le.getList()) - 1

    if in_str == '':
        print('?')
        return

    left, right, com = setNumAndCom(in_str.split()[0])

    try:
        fileName = in_str.split()[1]
    except IndexError:
        fileName = ''

    if left.isdecimal():
        curN = int(left)
    else:
        left = curN
        right = curN

    if com == 'a':
        curN += 1
        while True:
            s = input()
            if s == ".": break
            le.addStrAtN(curN, s)
            curN += 1
    elif com == 'p':
        while curN <= int(right):
            print(le.getStrAtN(curN))
            curN += 1
        curN -= 1
    elif com == 'n':
        while curN <= int(right):
            print(curN, le.getStrAtN(curN))
            curN += 1
        curN -= 1
    elif com == 'h':
        print(help_desc)
    elif com == 'q' or com == 'Q':
        flag = False
    elif com == 'd':
        for i in range(int(left), int(right) + 1):
            le.delStrAtN(curN)
    elif com == 'printList':
        print(le.getList())
    elif com == 'r':
        curN += 1
        with open(fileName, 'r') as f:
            cnt = 0
            for line in f:
                cnt += len(line)
                le.addStrAtN(curN, line[:-1])
                curN += 1
            print(cnt)
    elif com == 'w':
        with open(fileName, 'w') as f:
            cnt = 0
            while curN <= int(right):
                s = le.getStrAtN(curN) + '\n'
                cnt += len(s)
                f.write(s)
                curN += 1
            print(cnt)
    elif com == 'P':
        if prompt == '': prompt = '> '
        else: prompt = ''

    else:
        print('?')


le = LineEditor()

while flag:
    in_str = input(prompt)
    analyzeCommand(in_str, le)

print('bye')
