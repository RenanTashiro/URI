/*
Nome:      Pegadinha de Evergreen
ID:        2722
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.020s
Tamanho:   230 Bytes
Submissao: 21/12/17 17:59:54
*/
# -*- coding: utf-8 -*-

N = int(input())

for i in range(N):
	firstFrag = input()
	sndFrag = input()
	
	name = ''
	
	for i in range(0, len(firstFrag), 2):
		name += firstFrag[i:i+2] + sndFrag[i:i+2]
		
	print(name)
