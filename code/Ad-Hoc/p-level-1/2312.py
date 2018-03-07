/*
Nome:      Quadro De Medalhas
ID:        2312
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.040s
Tamanho:   293 Bytes
Submissao: 10/10/16 21:42:59
*/
# -*- coding: utf-8 -*-

N = int(input())
rank = []

for i in range(N):
	country, g, s, b = input().split()
	rank.append((int(g), int(s), int(b), country))
	
rank.sort(key=lambda x: (-x[0], -x[1], -x[2], x[3]))

for i in rank:
	g, s, b, country = i
	print(country, g, s, b)
	

