"""
Nome:      Fórmula 1
ID:        1125
Resposta:  Accepted
Linguagem: Python 3
Tempo:     0.248s
Tamanho:   890 Bytes
Submissao: 06/03/16 17:15:52
"""
# -*- coding: utf-8 -*-

while True:
	G, P = map(int, input().split())
	
	if G == 0 and P == 0:
		break
	
	corridas = []	
		
	for i in range(G):		
		corrida_atual = [int(n) for n in input().split()]
		corridas += [[idx + 1 for idx, piloto in 
		              sorted(enumerate(corrida_atual),
		              key=lambda x : x[1])]]
	
	S = int(input())
	
	for i in range(S):
		pontos = input().split()[1:]
		pontuacao = {number: 0 for number in range(1, P+1)}
		
		for corrida in corridas:
			for idx, corredor in enumerate(corrida[:len(pontos)]):
				pontuacao[int(corredor)] = pontuacao[int(corredor)] + int(pontos[idx])				
				
		max_value, maximum = 0, []
		
		for key, value in pontuacao.items():
			if max_value < value:
				max_value, maximum = value, [str(key)]
			elif max_value == value:
				maximum += [str(key)]
				
		print(' '.join(maximum))
