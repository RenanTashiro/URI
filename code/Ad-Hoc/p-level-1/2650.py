/*
Nome:      Construindo Muralhas
ID:        2650
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.028s
Tamanho:   176 Bytes
Submissao: 10/09/17 10:11:09
*/
# -*- coding: utf-8 -*-
N, W = (int(i) for i in input().split())
for n in range(N):
    info = input().split()
    if int(info[-1]) > W:
        print(' '.join(info[:-1]))