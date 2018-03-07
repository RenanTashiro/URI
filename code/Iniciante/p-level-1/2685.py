/*
Nome:      A Mudança
ID:        2685
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.012s
Tamanho:   314 Bytes
Submissao: 06/01/18 09:23:51
*/
# -*- coding: utf-8 -*-

while 1:
	try:
		M = int(input())
	except:
		break
		
	if M > 360:
		continue
		
	M %= 360
	
	if 0 <= M < 90:
		print('Bom Dia!!')
	elif 90 <= M < 180:
		print('Boa Tarde!!')
	elif 180 <= M < 270:
		print('Boa Noite!!')
	elif 270 <= M < 360:
		print('De Madrugada!!')
