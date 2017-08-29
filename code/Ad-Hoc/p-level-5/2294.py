"""
Nome:      Duende Perdido
ID:        2294
Resposta:  Accepted
Linguagem: Python 3
Tempo:     0.040s
Tamanho:   789 Bytes
Submissao: 11/10/16 09:03:59
"""
# -*- coding: utf-8 -*-

def solve(dungeon, coord, N, M):
	queue, move = [coord], ((-1, 0), (0, 1), (1, 0), (0, -1))
	visited = {(coord[0], coord[1])}
	while queue:
		u = queue.pop(0)
		for m in move:
			v = (u[0] + m[0], u[1] + m[1])
			if v[0] >= 0 and v[0] < N and v[1] >= 0 and v[1] < M and v not in visited:
				if dungeon[v[0]][v[1]] == '0':
					return u[2] + 1
				elif dungeon[v[0]][v[1]] == '1':
					queue.append((v[0], v[1], u[2] + 1))
					visited.add(v)
	return -1
				

N, M = (int(i) for i in input().split())

dungeon = []

for i in range(N):
	dungeon.append(input().split())	
	
for row in range(N):
	for col in range(M):
		if dungeon[row][col] == '3':
			coord = (row, col, 0) # ((coord), it)
			break
	
print(solve(dungeon, coord, N, M))
