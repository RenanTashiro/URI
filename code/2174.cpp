# -*- coding: utf-8 -*-

N = int(input())

pokedeck = set()

for i in range(N):
    pokedeck.add(input())
    
print('Falta(m) %d pomekon(s).'.format(151 - len(pokedeck)))
