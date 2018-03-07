/*
Nome:      Rodízio Veicular
ID:        2712
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.012s
Tamanho:   565 Bytes
Submissao: 21/12/17 17:44:58
*/
# -*- coding: utf-8 -*-

import re

N = int(input())

for i in range(N):
	plate = input()
	
	if len(plate) == 8 and re.match('[A-Z][A-Z][A-Z]-\d\d\d\d', plate):
		if '1' == plate[-1] or '2' == plate[-1]:
			print('MONDAY')
		elif '3' == plate[-1] or '4' == plate[-1]:
			print('TUESDAY')
		elif '5' == plate[-1] or '6' == plate[-1]:
			print('WEDNESDAY')
		elif '7' == plate[-1] or '8' == plate[-1]:
			print('THURSDAY')
		elif '9' == plate[-1] or '0' == plate[-1]:
			print('FRIDAY')
		else:
			print('FAILURE')
	else:
		print('FAILURE')

