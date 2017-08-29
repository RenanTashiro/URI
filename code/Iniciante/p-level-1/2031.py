"""
Nome:      Pedra, Papel, Ataque Aéreo
ID:        2031
Resposta:  Accepted
Linguagem: Python 3
Tempo:     0.072s
Tamanho:   666 Bytes
Submissao: 02/04/16 10:45:33
"""
# -*- coding: utf-8 -*-

""" URI - 2031 """
for caso in range(int(input())):
	player1 = input()
	player2 = input()
	
	if player1 < player2:
		play = player1 + player2
	else:
		play = player2 + player1 
	
	if play == 'ataquepedra':
		print('Jogador %d venceu' % (1 if player1 < player2 else 2))
	elif play == 'papelpedra':
		print('Jogador %d venceu' % (1 if player1 > player2 else 2))
	elif play == 'ataquepapel':
		print('Jogador %d venceu' % (1 if player1 < player2 else 2))
	elif play == 'papelpapel':
		print('Ambos venceram')
	elif play == 'pedrapedra':
		print('Sem ganhador')
	elif play == 'ataqueataque':
		print('Aniquilacao mutua')
