/*
Nome:      Truco
ID:        2309
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     1.076s
Tamanho:   422 Bytes
Submissao: 14/10/16 13:37:00
*/
# -*- coding: utf-8 -*-

n = int(input())

value = {1:25, 2:50, 3:100, 4:4, 5:5, 6:6, 7:7, 11:12, 12:11, 13:13}
Adalberto, Bernadete = 0, 0

for i in range(n):
	cards = [int(j) for j in input().split()]
	Ad, Br = 0, 0
	for j in range(3):
		if value[cards[j]] >= value[cards[j+3]]:
			Ad += 1
		else:
			Br += 1
	if Ad >= Br:
		Adalberto += 1
	else:
		Bernadete += 1
		
print(Adalberto, Bernadete)
		
