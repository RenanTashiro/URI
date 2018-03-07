/*
Nome:      Escolha Difícil
ID:        2702
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.016s
Tamanho:   190 Bytes
Submissao: 21/12/17 20:41:01
*/
# -*- coding: utf-8 -*-

Ca, Ba, Pa = (int(i) for i in input().split())
Cr, Br, Pr = (int(i) for i in input().split())

print(abs(min(Ca - Cr, 0) + min(Ba - Br, 0) + min(Pa - Pr, 0)))
