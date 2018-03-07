/*
Nome:      Qual Triângulo
ID:        2313
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.040s
Tamanho:   542 Bytes
Submissao: 10/10/16 21:13:41
*/
# -*- coding: utf-8 -*-

from math import sin

A, B, C = (int(i) for i in input().split())

if abs(B - C) < A and A < B + C and \
   abs(A - C) < B and B < A + C and \
   abs(A - B) < C and C < A + B:
	if A == B and A == C:
		print('Valido-Equilatero')
	elif A == B or A == C or B == C:
		print('Valido-Isoceles')
	else:
		print('Valido-Escaleno')
	if max(A, B, C) ** 2 == min(A, B, C) ** 2 + (A + B + C - min(A, B, C) - max(A, B, C)) ** 2:
		print('Retangulo: S')
	else:
		print('Retangulo: N')
else:
	print('Invalido')
