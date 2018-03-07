/*
Nome:      Reservatório de Mel
ID:        2029
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.052s
Tamanho:   237 Bytes
Submissao: 14/03/16 08:31:04
*/
# -*- coding: utf-8 -*-

while True:
	try:
		volume = float(input())
	except:
		break
	
	diametro = float(input())
	
	area = (diametro / 2) ** 2 * 3.14
	
	print('ALTURA = %.2f' % (volume / area))
	print('AREA = %.2f' % area)