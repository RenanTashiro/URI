/*
Nome:      Drop Out
ID:        1327
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.052s
Tamanho:   1,13 KB
Submissao: 06/03/16 08:13:57
*/
# -*- coding: utf-8 -*-

def lowerslist(cards, start, end):
	minimum, lowers = 15, []
	for i in range(start, end):
		if cards[i] < minimum:
			minimum, lowers = cards[i], [i - start]
		elif cards[i] == minimum:
			lowers += [i - start]
	return lowers

while True:	
	N = int(input())
	
	if N == 0: 
		break
				
	players = input().split(' ')[:N]	
	cards   = []
	
	for counter in range(4):
		cards += [int(n) for n in input().split(' ') if n.isdigit()]
		
	index = 0

	# Enquanto existirem cartas suficientes para o 
	# numero de jogadores joga-se uma rodada
	while index + len(players) < 52:		
		# Acha a lista com os jogadores que tiraram a menor carta
		# e depois atualiza o indice para a proxima carta a ser 
		# distribuida
		lowers = lowerslist(cards, index, index + len(players))
		index += len(players)
		
		# Caso o tamanho da lista seja igual ao numero de jogadores 
		# a partida se encerra
		if len(lowers) == len(players):
			break
	
		# Elimina os jogadores que tiraram a menor carta				
		players = [player for idx, player in enumerate(players) if idx not in lowers]
				
	print(' '.join(players), '')