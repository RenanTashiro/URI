import itertools

with open('2090.in', 'w') as f:
	for i in range(1, 22155):
		f.write('210 ' + str(i) + '\n')
		for i in itertools.combinations('abcdefghijklmnopqrstu', 19):
			f.write(''.join(i) + ' ')
		f.write('\n')
	f.write('0 0\n')
		
