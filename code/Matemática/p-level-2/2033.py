/*
Nome:      Juros Sobre o Empréstimo
ID:        2033
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.016s
Tamanho:   451 Bytes
Submissao: 06/01/18 16:18:08
*/
# -*- coding: utf-8 -*-

''' URI - 2033  '''
while True:
	try:
		valor = float(input())
	except:
		break

	juros = float(input())
	meses = int(input())
	
	simples = valor+(valor*juros*meses)
	composto = valor
	
	for mes in range(meses):
		composto += composto * juros
	
	print('DIFERENCA DE VALOR = %.2f' % abs(simples-composto))
	print('JUROS SIMPLES = %.2f' % (simples-valor))
	print('JUROS COMPOSTO = %.2f' % (composto-valor))
