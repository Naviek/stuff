from intset import IntSet

def print_help() :
    
    help_str = '''command list :
    i val1 val2 ... or insert val1 val2 ... :  val2 ... をval1の集合に挿入
    p val or print val : valの集合を表示
    c val or clear val : valの集合を空集合化
    inc val1 val2 : val1の集合の各要素にval2を加算
    l val or len val : valの集合の要素数を表示
    h or help : ヘルプを表示
    q or quit : 終了
    '''

    print(help_str)

def value_check(length) :
    print(len(token))
    return len(token) >= length

ss1 = IntSet()
ss2 = IntSet()

cmd = ""

while True :
    cmd = input(">> ")
    token = cmd.split()  # 空白やタブでコマンドを区切る
    f = token[0]

    if f == 'i' or f ==  'insert' :
        if len(token) >= 3:
            if token[1] == '1' :
                ss1.insert_list(token[2:])
            elif token[1] == '2' :
                ss2.insert_list(token[2:])
            else :
                print("Unknown set number")
        else :
            print("Does not input value.")

    elif f == 'p' or f ==  'print' :
        if len(token) >= 2:
            if token[1] == '1' :
                print(ss1)
            elif token[1] == '2' :
                print(ss2)
            else :
                print("Unknown set number")
        else :
            print("Does not input value.")

    elif f == 'h' or f ==  'help' :
        print_help()

    elif f == 'q' or f ==  'quit' :
        print("Bye!")
        break

    elif f == 'c' or f == 'clear' :
        if len(token) >= 2:
            if token[1] == '1' :
                ss1.clear()
            elif token[1] == '2' :
                ss2.clear()
            else :
                print("Unknown set number")
        else :
            print("Does not input value.")

    elif f == 'inc' :
        if len(token) >= 3:
            if token[1] == '1' :
                ss1.inc(int(token[2]))
            elif token[1] == '2' :
                ss2.inc(int(token[2]))
            else :
                print("Unknown set number")
        else :
            print("Does not input value.")

    elif f == 'l' or f == 'len' :
        if len(token) >= 2:
            if token[1] == '1' :
                print(ss1.len())
            elif token[1] == '2' :
                print(ss2.len())
            else :
                print("Unknown set number")
        else :
            print("Does not input value.")
    else :
        print("Unknown command")
    
