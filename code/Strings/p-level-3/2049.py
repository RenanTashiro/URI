/*
Nome:      Números de Ahmoc
ID:        2049
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.016s
Tamanho:   236 Bytes
Submissao: 15/05/16 07:52:22
*/
instancia = 1
while True:
	a = input()
	if a == '0':
		break
	if instancia > 1:
		print()		
	if a in input():
		print('Instancia %d\nverdadeira' % instancia)
	else:
		print('Instancia %d\nfalsa' % instancia)
	instancia += 1
