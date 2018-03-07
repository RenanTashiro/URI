/*
Nome:      Quantas Viagens Fará o Noel?
ID:        2719
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.024s
Tamanho:   290 Bytes
Submissao: 23/12/17 09:29:10
*/
# -*- coding: utf-8 -*-

T = int(input())

for i in range(T):
	N, M = (int(j) for j in input().split())
	
	W = [int(j) for j in input().split()]
	actSum = 0
	nTrips = 1
	
	for w in W:					
		actSum += w
		
		if actSum > M:
			actSum = w
			nTrips += 1
			
	print(nTrips)
