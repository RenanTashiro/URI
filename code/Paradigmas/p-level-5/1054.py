"""
Nome:      Sapo Dinâmico
ID:        1054
Resposta:  Accepted
Linguagem: Python 3
Tempo:     0.032s
Tamanho:   813 Bytes
Submissao: 21/07/16 17:46:08
"""
# -*- coding: utf-8 -*-

def jump(pedras):
	minimo, size = 0, len(pedras)
	for i in range(size):
		if i+1 < size and pedras[i+1][0] == 'B':
			minimo = max(minimo, pedras[i+1][1] - pedras[i][1])
		elif i+2 < size:
			minimo = max(minimo, pedras[i+2][1] - pedras[i][1])
		if i+2 < size and pedras[i+2][0] == 'B':
			minimo = max(minimo, pedras[i+2][1] -  pedras[i+1][1])
		elif i+3 < size:
			minimo = max(minimo, pedras[i+3][1] -  pedras[i+1][1]) 
	return minimo

def main():
    T = int(input())
	
    for t in range(T):
	    N, D = (int(n) for n in input().split())
	    if D == 0:
    		print(D)
	    else:
		    pedras = [['B', 0]] + [[p[0], int(p[2:])] for p in input().split()] + [['B', D]]		
		    print('Case %d: %d' % (t+1, jump(pedras)))

if __name__ == '__main__':
    main()