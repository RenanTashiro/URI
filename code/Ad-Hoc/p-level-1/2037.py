"""
Nome:      A Lista
ID:        2037
Resposta:  Accepted
Linguagem: Python 3
Tempo:     0.116s
Tamanho:   468 Bytes
Submissao: 11/04/16 19:58:05
"""
# -*- coding: utf-8 -*-

while True:
	N = int(input())
	if N == -1:
		break
	oplist = input().split()
	mylist = ""
	while any(oplist):
		for idx, op in enumerate(oplist):
			if op and op[0] == '1':
				mylist += str(idx+2)
				oplist[idx] = op[1:]
			elif op and int(op[0]) > 1 and oplist[int(op[0])-2] and \
							 (idx+2) == int(oplist[int(op[0])-2][0]):
				oplist[idx] = op[1:]
				oplist[int(op[0])-2] = oplist[int(op[0])-2][1:]
	print(mylist)
