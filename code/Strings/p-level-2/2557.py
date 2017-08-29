"""
Nome:      R+L=J
ID:        2557
Resposta:  Accepted
Linguagem: Python 3
Tempo:     0.020s
Tamanho:   314 Bytes
Submissao: 14/05/17 15:54:40
"""
# -*- coding: utf-8 -*-

while 1:
    try:
        expr = input()
    except:
        break
    A, expr = expr.split('+')
    B, C = expr.split('=')
    if A == 'R':
        print(int(C) - int(B))
    elif B == 'L':
        print(int(C) - int(A))
    elif C == 'J':
        print(int(A) + int(B))

