/*
Nome:      Número de Erdos
ID:        2249
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.048s
Tamanho:   1,41 KB
Submissao: 04/02/18 18:35:12
*/
# -*- coding: utf-8 -*-

t = 1

def bfs(authors):
	_next = [('P. Erdos', 0)]
	visited = set(['P. Erdos'])
	author_number = {}
	while _next:
		u, d = _next.pop(0)		
		for v in authors[u]:
			if not v in visited:
				_next.append((v, d+1))
				author_number[v] = d+1
				visited.add(v)		
	return author_number

while True:
	n = int(input())
	
	if n == 0:
		break
	
	authors = {'P. Erdos': []}
	
	for i in range(n):
		article = [d.strip().strip('.') for d in input().split(',')]
		if len(article) and not article[0] in authors:
			authors[article[0]] = []
		for m in range(len(article)):
			for n in range(m+1, len(article)):
				u, v = article[m], article[n]
				if not u in authors:
					authors[u] = []
				if not v in authors:
					authors[v] = []					
				authors[u].append(v)
				authors[v].append(u)				
	
	erdos = bfs(authors)
	
	for author in authors:
		if not author in erdos and author != 'P. Erdos':
			erdos[author] = 'infinito'
	
	erdos = list(erdos.items())
	erdos = sorted(erdos, key=lambda author: tuple(reversed(author[0].split())))
	
	print('Teste %d' % t)
	for info in erdos:
		author, number = info
		print('%s: %s' % (author, str(number)))	
	print()
	
	t += 1
	
#~ 5
#~ P. Erdos, A. Selberg.
#~ P. Erdos, J. Silva, M. Souza.
#~ M. Souza, A. Selberg, A. Oliveira.
#~ J. Ninguem, M. Ninguem.
#~ P. Duarte, A. Oliveira.
#~ 2
#~ Z. Silva, P. Erdos.
#~ Z. Souza.
