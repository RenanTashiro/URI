/*
Nome:      Complexo, Difícil e Complicado
ID:        1465
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.016s
Tamanho:   305 Bytes
Submissao: 23/02/18 08:59:55
*/
# -*- coding: utf-8 -*-

import cmath

m = int(input())

for i in range(m):
	a, b = input().split()
	z = complex(int(a), int(b))
	
	for i in range(1, 1000):
		z2 = z ** i
		if z2.imag == 0:
			print(i)
			break
		elif z2.real > 1073741824: # 2**30
			print('TOO COMPLICATED')
			break

