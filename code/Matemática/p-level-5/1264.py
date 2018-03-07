/*
Nome:      Um Problema Fácil!
ID:        1264
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.808s
Tamanho:   601 Bytes
Submissao: 25/01/18 16:59:48
*/
# -*- coding: utf-8 -*-

while 1:
	try:
		number = input()
	except:
		break
		
	if number[0] == '-':
		number = number[1:]
		
	ans = -1
	
	for b in range(2, 63):
		value = 0
		valid_base = True
		for n in number:
			value *= b
			if n.isdigit():
				w = ord(n) - ord('0')
			elif n.isupper():
				w = 10 + ord(n) - ord('A')
			else:
				w = 36 + ord(n) - ord('a')
			if w >= b:
				valid_base = False
				break
			value += w
	
		if valid_base and value % (b-1) == 0:
			ans = b
			break
			
	if ans == -1:
		print('such number is impossible!')
	else:
		print(ans)
