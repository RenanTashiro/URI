/*
Nome:      O Matemático
ID:        2691
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.016s
Tamanho:   299 Bytes
Submissao: 06/01/18 08:21:29
*/
# -*- coding: utf-8 -*-

N = int(input())

for i in range(N):
	x, y = (int(n) for n in input().split('x'))
	if x == y:
		for m in range(5, 11):
			print('%d x %d = %d' % (x, m, x * m))
	else:
		for m in range(5, 11):
			print('%d x %d = %d && %d x %d = %d' % (x, m, x * m, y, m, y * m))
