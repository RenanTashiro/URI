/*
Nome:      Godofor
ID:        2654
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.048s
Tamanho:   252 Bytes
Submissao: 10/09/17 15:28:51
*/
# -*- coding: utf-8 -*-
N = int(input())
candidates = []
for n in range(N):
    name, power, kill, death = (d for d in input().split())
    candidates.append((-int(power), -int(kill), int(death), name))
candidates.sort()
print(candidates[0][-1])