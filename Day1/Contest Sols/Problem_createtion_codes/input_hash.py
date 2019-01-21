from random import randint, choice, shuffle
from string import ascii_lowercase, ascii_uppercase

t = 10 #randint(1, 10)
print(t)
for i in range(t):
    n, q = 1000, 1000 #randint(1, 1000), randint(1, 1000)
    print(n, q)
    l = [ i+1 for i in range(1, 1005) ]
    shuffle(l)
    for j in range(n):
        m, z = l[j], ''.join(choice(ascii_uppercase + ascii_lowercase) for _ in range(10))
        print(m, z)

    for j in range(q):
        m = 999
        print(m)
    
