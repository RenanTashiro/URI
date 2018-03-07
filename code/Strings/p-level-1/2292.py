/*
Nome:      Painel LED
ID:        2292
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.468s
Tamanho:   303 Bytes
Submissao: 11/10/16 08:41:23
*/
# -*- coding: utf-8 -*-

N = int(input())

for i in range(N):
	P, C = input().split()
	Pv = sum(2 ** power if c == 'O' else 0 for power, c in enumerate(P))	
	ans = ''.join(['O' if b == '1' else 'X' for b in bin((Pv + int(C)) % 2 ** len(P))[:1:-1]])
	ans += (len(P) - len(ans)) * 'X'
	print(ans)