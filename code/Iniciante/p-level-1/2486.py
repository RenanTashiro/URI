/*
Nome:      C Mais ou Menos?
ID:        2486
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.016s
Tamanho:   503 Bytes
Submissao: 19/04/17 16:34:53
*/
table = {
		'suco de laranja': 120,
		'morango fresco' : 85,
		'mamao'          : 85,
		'goiaba vermelha': 70,
		'manga'          : 56,
		'laranja'        : 50,
		'brocolis'       : 34
	}

while 1:
	T = int(input())
	if T == 0:
		break
	total = 0
	for i in range(T):
		data = input().split()
		total += int(data[0]) * table[' '.join(data[1:])]
	if total < 110:
		print('Mais', 110 - total, 'mg')
	elif total < 131:
		print(total, 'mg')
	else:
		print('Menos', total - 130, 'mg')
