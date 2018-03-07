/*
Nome:      Saltos Ornamentais
ID:        2311
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.048s
Tamanho:   221 Bytes
Submissao: 10/10/16 21:17:13
*/
# -*- coding: utf-8 -*-

N = int(input())

while N:
	name = input()
	GD = float(input())
	score = [float(i) for i in input().split()]
	print(name, '%.2f' % ((sum(score) - max(score) - min(score)) * GD))
	N -= 1
