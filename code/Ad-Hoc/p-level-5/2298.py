/*
Nome:      Mini-Poker
ID:        2298
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.024s
Tamanho:   1,19 KB
Submissao: 05/02/18 09:23:03
*/
# -*- coding: utf-8 -*-

def equal(h):
	return all([h[i] == h[i+1] for i in range(len(h)-1)])

def issequence(h):
	return all([h[i]+1 == h[i+1] for i in range(4)])

def isfourofakind(h):
	return equal(h[:4]) or equal(h[1:])

def isfullhouse(h):
	return equal(h[:2]) and equal(h[2:]) or equal(h[:3]) and equal(h[3:])

def isthreeofakind(h):
	return equal(h[:3]) or equal(h[1:4]) or equal(h[2:])

def findpair(h):
	count = {}
	for v in h:
		if not v in count:
			count[v] = 0
		count[v] += 1
	pairs = []
	for k, c in count.items():
		if c == 2:
			pairs.append(k)
	return pairs	

def istwopair(h):
	return len(findpair(h)) == 2

def ispair(h):
	return len(findpair(h)) == 1


n = int(input())
t = 1

for i in range(n):
	hand = sorted([int(v) for v in input().split()])
	
	print('Teste %d' % t)
	
	if issequence(hand):
		print(hand[0]+200)
	elif isfourofakind(hand):
		print(hand[1]+180)
	elif isfullhouse(hand):
		print(hand[2]+160)
	elif isthreeofakind(hand):
		print(hand[2]+140)
	elif istwopair(hand):
		p = sorted(findpair(hand))
		print(3*p[1] + 2*p[0] + 20)
	elif ispair(hand):
		p = findpair(hand)
		print(p[-1])
	else:
		print(0)
	
	print()
	t += 1
