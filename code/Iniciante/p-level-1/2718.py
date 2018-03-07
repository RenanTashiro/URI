/*
Nome:      Luzes de Natal
ID:        2718
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.028s
Tamanho:   251 Bytes
Submissao: 21/12/17 17:53:21
*/
N = int(input())

for i in range(N):
	X = int(input()) 
	
	maxConsec = 0
	actConsec = 0
	
	for c in bin(X) + 'X':
		if c == '1':
			actConsec += 1
		else:
			maxConsec = max(maxConsec, actConsec)
			actConsec = 0
			
	print(maxConsec)
