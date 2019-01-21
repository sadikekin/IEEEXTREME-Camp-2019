from random import randint, choice, shuffle

n, m = randint(1, 5000), randint(1, 100000)
print(n, m)
print(' '.join([ str(randint(9999999998, 10000000000)) for i in range(m)]))