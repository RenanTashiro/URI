/*
Nome:      Projetando Camisetas
ID:        2035
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     1.096s
Tamanho:   1,06 KB
Submissao: 17/04/16 09:14:38
*/
# -*- coding: utf-8 -*-

import bisect

def bsearch(ite, key):
	mi = bisect.bisect_left(ite, key)
	
	if ite and mi == len(ite):
		mi -= 1
	if mi > 0 and count_eq(ite[mi], key) < count_eq(ite[mi-1], key): 
		mi -= 1
	
	return ite[mi], mi

def count_eq(a, b):
	for c, (i, j) in enumerate(zip(a,b)):
		if i != j:
			return c
	return min(len(a), len(b))

while True:	
	N = input()
	
	if N == '-1':
		break
	
	D = input().split()
	S = input().split()
	
	dplayers = {key: [] for key in 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'}
	splayers = {key: [] for key in 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'}
		
	for d, s in zip(D,S):
		bisect.insort(dplayers[d[0]], d)
		bisect.insort(splayers[s[0]], s)

	counter = 0
	
	for i in 'ABCDEFGHIJKLMNOPQRSTUVWXYZ':
		while dplayers[i] and splayers[i]:
			for d in dplayers[i]:
				if not splayers[i] or not dplayers:
					break 
				sp, ids = bsearch(splayers[i], d)
				dp, idd = bsearch(dplayers[i], sp)
				if dp == d:
					counter += count_eq(dp, sp)
					del dplayers[i][idd]
					del splayers[i][ids]
		 	
	print(counter)
