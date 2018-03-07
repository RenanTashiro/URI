/*
Nome:      Nova Senha RA
ID:        2690
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.016s
Tamanho:   461 Bytes
Submissao: 24/10/17 08:42:13
*/
# -*- coding: utf-8 -*-

N = int(input())

byString = {'GQaku': '0', 'ISblv': '1', 'EOYcmw': '2', 
			'FPZdnx': '3', 'JTeoy': '4', 'DNXfpz': '5',
			'AKUgq': '6', 'CMWhr': '7', 'BLVis': '8',
			'HRjt': '9'}

byChar = {}

for key, value in byString.items():
	for c in key:
		byChar[c] = value

for i in range(N):
	password = input().replace(' ', '')
	new_pass = ''
	
	for p in password[:12]:
		new_pass += byChar[p]
		
	print(new_pass)
	
