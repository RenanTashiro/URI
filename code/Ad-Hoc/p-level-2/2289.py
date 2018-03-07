/*
Nome:      Distância Hamming
ID:        2289
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     1.272s
Tamanho:   298 Bytes
Submissao: 06/01/18 16:49:00
*/
# -*- coding: utf-8 -*-

from itertools import zip_longest

while True:
	X, Y = (int(i) for i in input().split())
	
	if X == 0 and Y == 0:
		break
		
	count = 0	
		
	for i, j in zip_longest(bin(X)[:1:-1], bin(Y)[:1:-1], fillvalue='0'):
		if i != j:
			count += 1
			
	print(count)
