/*
Nome:      Linguagem
ID:        1623
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     6.752s
Tamanho:   315 Bytes
Submissao: 06/01/18 16:14:56
*/
# -*- coding: utf-8 -*-

import functools
import operator

while True:
	N, Q = [int(n) for n in input().split()]

	if N == Q and N == 0:
		break

	T = int(input())
	
	logwords = 1
	
	for i in range(2, N-Q+2):
		logwords *= i
	
	if logwords <= T:
		print(logwords)
	else:
		print('descartado')
