/*
Nome:      A Viagem
ID:        1220
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.112s
Tamanho:   456 Bytes
Submissao: 25/01/18 16:39:22
*/
# -*- coding: utf-8 -*-

while 1:
	n = int(input())
	if n == 0:
		break		
	expense = [float(input()) for i in range(n)]
	avg = sum(expense) / n
	d, f = str(avg).split('.')
	f = f + '0' * (2-len(f))
	avg = float(d) + float(f[:2]) / 100

	r = sum(avg - e for e in expense if e < avg)
	diffs = [e - avg for e in expense if e > avg]
	ans = 0.0

	for diff in diffs:
		ans += diff - 0.01
	
	if ans < r:
		ans = r
			
	print('$%.2f' % ans)
