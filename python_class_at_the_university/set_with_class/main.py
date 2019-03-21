from intset import IntSet

s1 = IntSet()
s2 = IntSet()

def display():
    print('s1:', s1, '  s2:', s2)

def reset():
    s1.clear()
    s2.clear()
    s1.insert(2)
    s1.insert(3)
    s2.insert(3)
    s2.insert(2)
    s2.insert(5)

reset()
print("default value")
display()

s1.clear()
print("\ns1.clear()")
display()
reset()

lst = [6, 8, 9]
s1.insert_list(lst)
print("\ns1.insert_list(lst = [6, 8, 9])")
display()
reset()

s1.inc(2)
print("\ns1.inc(2)")
display()
reset()

print("\ns1.len() =", s1.len())

print("\ns1 & s2 =", s1 & s2)

print("\ns1 - s2 =", s1 - s2)

print("\ns1 ^ s2 =", s1 ^ s2)

print("\ns1 <= s2 =", s1 <= s2)

print("\ns1 == s2 =", s1 == s2)


