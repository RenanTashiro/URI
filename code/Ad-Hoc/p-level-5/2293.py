"""
Nome:      Campo de Minhocas
ID:        2293
Resposta:  Accepted
Linguagem: Python 3
Tempo:     0.056s
Tamanho:   301 Bytes
Submissao: 11/10/16 08:49:54
"""
# -*- coding: utf-8 -*-

def main():
    N, M = input().split()
    
    farm = []
    
    for i in range(int(N)):
    	farm.append([int(j) for j in input().split()])
    	
    ans = 0
    
    for i in farm + list(zip(*farm)):
    	ans = max(ans, sum(i))
    
    print(ans)

main()