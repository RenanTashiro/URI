/*
Nome:      Eachianos I
ID:        2593
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.016s
Tamanho:   349 Bytes
Submissao: 11/01/18 12:55:06
*/
# -*- coding: utf-8 -*-

def main():
	text = input().split()
	n_words = int(input()) # useless
	words = input().split()	
	for word in words:	
		index = []
		acc = 0
		for i, w in enumerate(text):
			if w == word:
				index.append(str(i + acc))
			acc += len(w)
		if index:
			print(' '.join(index))
		else:
			print(-1)
		
main()
