/*
Nome:      Coleção de Pomekon
ID:        2174
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.044s
Tamanho:   184 Bytes
Submissao: 22/08/16 21:45:36
*/
# -*- coding: utf-8 -*-

N = int(input())

pokedeck = set()

for i in range(N):
    pokedeck.add(input())
    
print('Falta(m) {} pomekon(s).'.format(151 - len(pokedeck)))

