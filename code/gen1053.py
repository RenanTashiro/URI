from random import randint

with open('debug.in', 'w') as f:
    f.write(str(5000) + '\n')
    for j in range(5000):
        f.write(str(9) + '\n')
        for i in range(9):
            tag1, tag2 = '', ''
            while tag1 == tag2:
                tag1, tag2 = chr(randint(ord('A'),ord('E'))) + str(randint(1,5)), chr(randint(ord('A'),ord('E'))) + str(randint(1,5))
            f.write(tag1)
            f.write(' ')
            f.write(tag2)
            f.write('\n')
