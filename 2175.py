O, B, I = (float(i) for i in input().split())

if O < B and O < I:
	print('Otavio')
elif B < O and B < I:
	print('Bruno')
elif I < O and I < B:
	print('Ian')
else:
	print('Empate')

