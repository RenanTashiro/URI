/*
Nome:      Problema com a Calculadora
ID:        2694
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.092s
Tamanho:   182 Bytes
Submissao: 19/10/17 08:09:42
*/
# -*- coding: utf-8 -*-

import re

N = int(input())

for i in range(N):
	expr = input()
	print(sum(int(field) for field in re.split('[a-zA-Z]', expr) if field != ''))
			
