import random

with open('2089.in', 'w') as f:
	for i in range(int(input('Numero de testes: '))):
		V = random.randint(1, 100000)
		N = random.randint(1, 50)		
		f.write(str(V) + ' ' + str(N) + '\n')
		for j in range(N):
			f.write(str(random.randint(1, V//10))+ ' ')
		f.write('\n')
	f.write('0 0\n')
