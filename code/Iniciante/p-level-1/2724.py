/*
Nome:      Ajude Patatatitu
ID:        2724
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.016s
Tamanho:   823 Bytes
Submissao: 21/12/17 18:43:05
*/
# -*- coding: utf-8 -*-

def isDangerous(dc, comp):
	pos = -1 # -1 por causa do offset do .find
	dangerous = False
	
	while True:
		pos = comp.find(dc, pos+1)

		if pos == -1:
			break
	
		if pos + len(dc) >= len(comp):
			dangerous = True
			break
		
		if pos + len(dc) < len(comp):
			if comp[pos+len(dc)].isupper():
				dangerous = True
				break
		
	return dangerous
	
	
N = int(input())

for i in range(N):
	T = int(input())
	
	dangerComp = []
	
	for j in range(T):
		dangerComp.append(input())	
		
	U = int(input())
	
	for j in range(U):
		comp = input()
		dangerous = False
		
		for dc in dangerComp:
			if isDangerous(dc, comp):
				dangerous = True
				break
				
		if dangerous:
			print('Abortar')
		else:
			print('Prossiga')
		
	if i != N-1:
		print()



