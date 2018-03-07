/*
Nome:      Indecisão das Renas
ID:        2721
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.016s
Tamanho:   228 Bytes
Submissao: 27/12/17 14:00:47
*/
# -*- coding: utf-8 -*-

sleighName = 'Dasher, Dancer, Prancer, Vixen, Comet, Cupid, Donner, Blitzen, Rudolph'.split(', ')
snowBallCount = sum(int(i) for i in input().split())

print(sleighName[(snowBallCount-1) % 9])


