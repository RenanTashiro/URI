"""
Nome:      Coleção de Pomekon
ID:        2174
Resposta:  Accepted
Linguagem: Python 3
Tempo:     0.052s
Tamanho:   195 Bytes
Submissao: 22/08/16 21:51:40
"""
# -*- coding: utf-8 -*-

def main():
	pokedeck = set()

	for i in range(int(input())):
		pokedeck.add(input())
		
	print('Falta(m) {} pomekon(s).'.format(151 - len(pokedeck)))

main()
