/*
Nome:      Eletricidade
ID:        1374
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.104s
Tamanho:   433 Bytes
Submissao: 15/09/17 22:49:09
*/
from datetime import date

while True:
	N = int(input())
	if N == 0:
		break
	date_consum = []
	for i in range(N):
		D, M, Y, C = input().split()
		d = date(int(Y), int(M), int(D))
		date_consum.append((d, int(C)))
	day, consum = 0, 0
	for i in range(1, N):
		delta = date_consum[i][0] - date_consum[i-1][0]
		if delta.days == 1:
			day += 1
			consum += date_consum[i][1] - date_consum[i-1][1]
	print(day, consum)
