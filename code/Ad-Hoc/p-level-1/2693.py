/*
Nome:      Van
ID:        2693
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.028s
Tamanho:   287 Bytes
Submissao: 24/10/17 08:11:55
*/
# -*- coding: utf-8 -*-

while 1:
	try:
		Q = int(input())
	except:
		break

	schedule = []

	for i in range(Q):
		student, region, cost = input().split()
		schedule.append((int(cost), region, student))

	schedule.sort()

	print('\n'.join([s[2] for s in schedule]))
		
