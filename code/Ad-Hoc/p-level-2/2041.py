/*
Nome:      Sequência de Gödelito
ID:        2041
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.640s
Tamanho:   280 Bytes
Submissao: 18/04/16 17:13:01
*/
# -*- coding: utf-8 -*-

import re

while True:
	try:
		N = int(input())
	except:
		break
	seq = '3'
	for i in range(N-1):
		seq = re.findall('0+|1+|2+|3+|4+|5+|6+|7+|8+|9+', seq)
		nseq = ''
		for j in seq:
			nseq += str(len(j)) + j[0]
		seq = nseq
	print(seq)
