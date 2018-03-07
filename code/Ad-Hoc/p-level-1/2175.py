/*
Nome:      Qual o Mais Rápido?
ID:        2175
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.028s
Tamanho:   220 Bytes
Submissao: 22/08/16 21:49:23
*/
# -*- coding: utf-8 -*-

O, B, I = (float(i) for i in input().split())

if O < B and O < I:
	print('Otavio')
elif B < O and B < I:
	print('Bruno')
elif I < O and I < B:
	print('Ian')
else:
	print('Empate')

