/*
Nome:      Minha Senha Provisória
ID:        2714
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.032s
Tamanho:   240 Bytes
Submissao: 21/12/17 17:23:02
*/
# -*- coding: utf-8 -*-

import re

N = int(input())

for i in range(N):
	ra = input()
	
	if len(ra) == 20 and re.match('RA\d+', ra):
		start = re.search('[1-9]', ra).start()
		print(ra[start:])
	else:
		print('INVALID DATA')
