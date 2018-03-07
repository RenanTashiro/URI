/*
Nome:      Carnaval
ID:        2418
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.056s
Tamanho:   128 Bytes
Submissao: 10/06/17 18:26:23
*/
# -*- coding: utf-8 -*-
score = [float(i) for i in input().split()]
print('%.1f' % (sum(score) - (max(score) + min(score))))
