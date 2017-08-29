"""
Nome:      Abreviações
ID:        1519
Resposta:  Accepted
Linguagem: Python 3
Tempo:     0.056s
Tamanho:   765 Bytes
Submissao: 30/04/16 14:55:01
"""
# -*- coding: utf-8 -*-

def abbreviation(words):
	goldenword, worth = '', 0
	for word, freq in words.items():
		value = (len(word)-2) * freq
		if value > worth:
			goldenword = word
			worth = value
	return goldenword

while True:
	line = input()
	if line == '.':
		break
	line = line.split()
	occur = {c: {} for c in 'abcdfeghijklmnopqrstuvwxyz'}
	for l in line:
		if not l in occur[l[0]]:
			occur[l[0]][l] = 1
		else:
			occur[l[0]][l] += 1
	shortening = set()
	for _, words in occur.items():
		abbword = abbreviation(words)
		if abbword: shortening.add(abbword)
	print(' '.join([word[0] + '.' if word in shortening else word for word in line]))
	print(len(shortening))
	for a in sorted(list(shortening)):
		print(a[0] + '. =', a)
