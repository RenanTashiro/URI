/*
Nome:      Converter Quilômetros para Milhas
ID:        1643
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.628s
Tamanho:   701 Bytes
Submissao: 15/03/16 09:00:07
*/
# -*- coding: utf-8 -*-

def fibonacci():
	fib = [1, 2]
	for i in range(1, 20):
		fib += [fib[i] + fib[i-1]]
	return list(reversed(fib))
	
def fibin(number, fib):
	fibin, index = [], next((index for index, i in enumerate(fib) if i <= number), None)
	while index < len(fib):
		if fib[index] <= number:
			fibin += [1]
			number -= fib[index]
		else:
			fibin += [0]
		index += 1 
	return fibin

def fibin_to_miles(fibin, fib):
	miles, rfib = 0, list(reversed(fib))
	for i, value in zip(fibin[::-1], rfib):
		miles += i * value
	return miles				
	
fib = fibonacci()

for counter in range(int(input())):
	x = int(input())	
	
	print(fibin_to_miles(fibin(x, fib)[:-1], fib))
