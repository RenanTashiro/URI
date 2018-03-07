/*
Nome:      O Primo de Josephus
ID:        1032
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.124s
Tamanho:   593 Bytes
Submissao: 06/03/16 10:15:56
*/
# -*- coding: utf-8 -*-

def eratosthenes_sieve(upper_bound):
	primes = list(range(upper_bound+1))
	for number in range(2, int(upper_bound**.5)+1):
		for i in range(number**2, len(primes), number):
			primes[i] = False
	return [prime for prime in primes if prime]
	
primes = eratosthenes_sieve(32650)

while True:
	circle_size = int(input())
	
	if circle_size == 0:
		break
		
	circle = list(range(1, circle_size+1))
	pos, index  = 0, 1
	
	while len(circle) != 1:
		pos = (pos + primes[index] - 1) % len(circle) 
		index += 1		
		del circle[pos]
		
	print(circle[0])
