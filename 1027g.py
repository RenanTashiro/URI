from random import randint

lo, hi = -2**15, 2**15

with open('1027.in', 'w') as f:
	for i in range(1):
		f.write('1000\n')
		for i in range(1000):
			f.write(str(randint(lo, hi)) + ' ' + str(randint(lo, hi)) + '\n')
