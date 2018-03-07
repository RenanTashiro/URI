/*
Nome:      Pit Stop
ID:        2030
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.044s
Tamanho:   543 Bytes
Submissao: 08/04/16 07:56:34
*/
# -*- coding: utf-8 -*-

""" URI - 2030: Ad-hoc """

for teste in range(1, int(input())+1):
	t1, t2, a, v, r = (int(n) for n in input().split())
	
	diff, tempo, pit, rest = t2 - t1, 0, 0, r % v
	
	if v >= r:
		tempo = t1 * r
	else:
		if a / diff < v:
			pit += int(r / v) - 1
			tempo = pit * a + (r - rest) * t1
			if diff * rest > a:
				pit += 1
				tempo += a + rest * t1
			else:
				tempo += rest * t2 
		else:
			tempo = (t1 * v) + (t2 * (r - v))
	
	print('Teste #%d' % teste)
	print(tempo, pit, end='\n\n')
	
