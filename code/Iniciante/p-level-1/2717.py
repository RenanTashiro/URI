/*
Nome:      Tempo do Duende
ID:        2717
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.016s
Tamanho:   140 Bytes
Submissao: 21/12/17 17:46:42
*/
N = int(input())
A, B = (int(i) for i in input().split())

if A + B <= N:
	print('Farei hoje!')
else:
	print('Deixa para amanha!')

