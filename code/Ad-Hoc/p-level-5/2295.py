"""
Nome:      Frota de Táxi
ID:        2295
Resposta:  Accepted
Linguagem: Python 3
Tempo:     0.044s
Tamanho:   137 Bytes
Submissao: 11/10/16 09:07:35
"""
# -*- coding: utf-8 -*-

A, G, Ra, Rg = (float(i) for i in input().split())

if Ra / A > Rg / G:
	print('A')
else:
	print('G')		
