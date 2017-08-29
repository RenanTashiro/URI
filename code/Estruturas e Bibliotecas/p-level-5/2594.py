"""
Nome:      Eachianos II
ID:        2594
Resposta:  Accepted
Linguagem: Python 3
Tempo:     0.024s
Tamanho:   286 Bytes
Submissao: 17/07/17 17:59:58
"""
import re

def main():
	n = int(input())
	for i in range(n):
		text = ' ' + input() + ' ' 
		word = input()
		occurrence = [str(occur.start()) for occur in re.finditer(' ' + word + ' ', text)]
		if occurrence:
			print(' '.join(occurrence))
		else:
			print(-1)
		
main()
