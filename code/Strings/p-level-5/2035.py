"""
Nome:      Projetando Camisetas
ID:        2035
Resposta:  Accepted
Linguagem: Python 3
Tempo:     0.840s
Tamanho:   1,12 KB
Submissao: 21/07/16 17:53:54
"""
# -*- coding: utf-8 -*-

from bisect import insort, bisect_left

def bsearch(ite, key):
	mi = bisect_left(ite, key)
	
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

def main():
	while True:	
		N = input()
		
		if N == '-1':
			break
		
		D = input().split()
		S = input().split()
		
		dplayers = {key: [] for key in 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'}
		splayers = {key: [] for key in 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'}
			
		for d, s in zip(D,S):
			insort(dplayers[d[0]], d)
			insort(splayers[s[0]], s)

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

main()

