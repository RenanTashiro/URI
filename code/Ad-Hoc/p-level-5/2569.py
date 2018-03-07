/*
Nome:      A Bruxa do 7 x 1
ID:        2569
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.028s
Tamanho:   245 Bytes
Submissao: 12/06/17 19:44:14
*/
# -*- coding: utf-8 -*-

A, op, B = input().split()

A = A.replace('7', '0')
B = B.replace('7', '0')

if op == '+':
    print(int(str(int(A) + int(B)).replace('7', '0')))
else:
    print(int(str(int(A) * int(B)).replace('7', '0')))

