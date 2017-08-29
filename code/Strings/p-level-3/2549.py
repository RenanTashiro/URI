"""
Nome:      Nomes de Usuários
ID:        2549
Resposta:  Accepted
Linguagem: Python 3
Tempo:     1.468s
Tamanho:   286 Bytes
Submissao: 17/05/17 12:08:05
"""
while True:
	try:
		N, A = (int(i) for i in input().split())		
	except:
		break
	users = set()
	counter = 0
	for i in range(N):
		name = input()
		user = ''.join([c[0] for c in name.split()])
		if user in users:
			counter += 1
		else:
			users.add(user)
	print(counter)
