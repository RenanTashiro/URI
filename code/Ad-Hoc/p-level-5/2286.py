/*
Nome:      Par ou Ímpar
ID:        2286
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.048s
Tamanho:   299 Bytes
Submissao: 11/10/16 10:04:31
*/
# -*- coding: utf-8 -*-

test = 1

while 1:
	N = int(input())
	if N == 0:
		break	
	par = input()
	impar = input()
	print('Teste %d' % test)
	test += 1
	for i in range(N):
		A, B = input().split()
		if (int(A) + int(B)) % 2 == 0:
			print(par)
		else:
			print(impar)
	print()
	
