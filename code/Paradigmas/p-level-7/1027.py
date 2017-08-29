"""
Nome:      Onda Crítica
ID:        1027
Resposta:  Accepted
Linguagem: Python 3
Tempo:     1.044s
Tamanho:   967 Bytes
Submissao: 21/07/16 17:50:31
"""
# -*- coding: utf-8 -*-

import bisect
from collections import defaultdict

def maximize(twoseq, maxv=-(2**16), fturn=True):
	first, second = twoseq
	c, f, s, lf, ls = 0, 0, 0, len(first), len(second)
	while True:
		if f < lf and fturn:
			if first[f] > maxv:
				maxv = first[f]
				fturn = False
				c += 1
			f += 1
		elif s < ls and not fturn:
			if second[s] > maxv:
				maxv = second[s]
				fturn = True
				c += 1
			s += 1
		else:
			break
	return c

def main():
	while True:
		try:
			N = int(input())
		except:
			break
		points = defaultdict(list)
		insort = bisect.insort
		for i in range(N):
			x, y = (int(n) for n in input().split())
			insort(points[y], x)
		keys, ans = sorted(list(points.keys())), 1		
		for i in keys:		
			if i+2 in points:
				ans = max(ans, maximize((points[i], points[i+2])), 
				maximize((points[i], points[i+2]), fturn=False))
		print(ans)
		
if __name__ == '__main__':
	main()

