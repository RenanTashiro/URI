/*
Nome:      Bafo
ID:        2297
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.536s
Tamanho:   288 Bytes
Submissao: 11/10/16 09:17:35
*/
# -*- coding: utf-8 -*-

test = 1
while 1:
	R = int(input())
	if R == 0:
		break
	A, B = 0, 0
	for i in range(R):
		Ai, Bi = (int(j) for j in input().split())
		A += Ai
		B += Bi
	print('Teste %d' % test)
	test += 1
	if A > B:
		print('Aldo\n')
	else:
		print('Beto\n')
