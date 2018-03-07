/*
Nome:      Churras no Yuri
ID:        2633
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.020s
Tamanho:   290 Bytes
Submissao: 10/09/17 10:18:30
*/
# -*- coding: utf-8 -*-
while True:
    try:
        N = int(input())
    except:
        break
    meat = []
    for i in range(N):
        m, d = (item for item in input().split())
        meat.append((int(d), m))
    meat.sort()
    print(' '.join([m[1] for m in meat]))
    