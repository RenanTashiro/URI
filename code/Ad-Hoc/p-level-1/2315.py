"""
Nome:      Diferença Fácil Entre Datas
ID:        2315
Resposta:  Accepted
Linguagem: Python 3
Tempo:     0.024s
Tamanho:   281 Bytes
Submissao: 10/10/16 21:33:07
"""
# -*- coding: utf-8 -*-

#~ m = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
m = [0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365]
d1, m1 = (int(i) for i in input().split())
d2, m2 = (int(i) for i in input().split())
print((d2 + m[m2-1]) - (d1 + m[m1-1]))
