/*
Nome:      Hoje tem Prova da Cris!
ID:        1396
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.112s
Tamanho:   777 Bytes
Submissao: 14/03/16 09:33:43
*/
# -*- coding: utf-8 -*-

def swap(students, number, start):
	counter, pos, lower = 0, 0, students[start-1]
	for student in students[start:]:
		if counter == number:
			break
		counter += 1
		if student < lower:
			lower = student
			pos = counter
	nstudents = students[:start-1] + [lower] + \
	            [student for student in students[start-1:]]
	del nstudents[pos + start]
	return nstudents, number - pos

instance = 1

while True:	
	n, k = [int(n) for n in input().split()]
	
	if n == k and n == 0:
		break
		
	students = input().split()
	
	start = 1
	
	while start != n and k != 0:
		students, k = swap(students, k, start)
		start += 1
	
	print('Instancia %d' % (instance))
	print(' '.join(students), end=' \n\n')
	
	instance += 1
	
