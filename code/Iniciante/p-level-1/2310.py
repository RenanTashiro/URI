"""
Nome:      Voleibol
ID:        2310
Resposta:  Accepted
Linguagem: Python 3
Tempo:     0.040s
Tamanho:   458 Bytes
Submissao: 10/10/16 21:23:01
"""
# -*- coding: utf-8 -*-

N = int(input())
s, a, b = 0, 0, 0
s1, a1, b1 = 0, 0, 0

for c in range(N):
	name = input()
	S, B, A = (int(i) for i in input().split())
	S1, B1, A1 = (int(i) for i in input().split())
	s += S
	b += B
	a += A
	s1 += S1
	b1 += B1
	a1 += A1
	
print('Pontos de Saque: %.2f %%.' % ((s1 / s) * 100.0))
print('Pontos de Bloqueio: %.2f %%.' % ((b1 / b) * 100.0))
print('Pontos de Ataque: %.2f %%.' % ((a1 / a) * 100.0))
