/*
Nome:      Teclado Zoeiro
ID:        2692
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.064s
Tamanho:   377 Bytes
Submissao: 24/10/17 08:19:23
*/
# -*- coding: utf-8 -*-

import string

N, M = (int(i) for i in input().split())

translate = {}

for i in range(N):
	e, s = input().split()
	translate[e] = s
	translate[s] = e
	
for i in range(M):
	phrase = input()
	new_phrase = ''
	
	for c in phrase:
		if c in translate:
			new_phrase += translate[c]
		else:
			new_phrase += c
		
	print(new_phrase)
