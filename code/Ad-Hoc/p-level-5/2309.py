"""
Nome:      Truco
ID:        2309
Resposta:  Accepted
Linguagem: Python 3
Tempo:     0.772s
Tamanho:   420 Bytes
Submissao: 14/10/16 13:40:58
"""
# -*- coding: utf-8 -*-

n = int(input())

valuev2 = [0, 100, 200, 300, 4, 5, 6, 7, 8, 9, 10, 12, 11, 13]
Adalberto, Bernadete = 0, 0

for i in range(n):
	cards = [int(j) for j in input().split()]
	Ad, Br = 0, 0
	for j in range(3):
		if valuev2[cards[j]] >= valuev2[cards[j+3]]:
			Ad += 1
		else:
			Br += 1
	if Ad >= Br:
		Adalberto += 1
	else:
		Bernadete += 1
		
print(Adalberto, Bernadete)
		
