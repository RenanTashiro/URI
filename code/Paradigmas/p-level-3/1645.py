/*
Nome:      El Dorado
ID:        1645
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.688s
Tamanho:   735 Bytes
Submissao: 05/06/16 20:03:38
*/
# -*- coding: utf-8 -*-
import functools

def cache(func):
	cache.cache = dict()
	def cached(*args):
		if args not in cache.cache:
			result = func(*args)
			cache.cache[args] = result
			return cache.cache[args]
		else:
			return cache.cache[args]
	return cached

@cache
def consec_seq_util(arr, n, k):
	if k == 1:
		return 1
	ans = 0
	for i in range(n):
		if arr[0] < arr[i]:
			ans += consec_seq_util(arr[i:], n-i, k-1)
	return ans

def consec_seq(arr, n, k):
	ans = 0
	for i in range(n-k+1):
		ans += consec_seq_util(arr[i:], n-i, k)
	return ans

while True:
	N, K = (int(i) for i in input().split())
	if N == 0:
		break
	arr = tuple(int(i) for i in input().split())
	print(consec_seq(arr, N, K))