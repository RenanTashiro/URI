/*
Nome:      Compactação de Nulos e Brancos
ID:        1236
Resposta:  Accepted
Linguagem: Python 2 (Python 2.7.6) [+1s]
Tempo:     0.104s
Tamanho:   808 Bytes
Submissao: 15/01/18 12:54:46
*/
N = input()

for n in range(N):
	text = raw_input() + '\n'
	chars = []
	last_char, count = text[0], 0
		
	for c in text:
		if c == last_char:
			count += 1
		else:
			chars.append((last_char, count))
			last_char = c
			count = 1
			
	new_text = ''		
			
	for char, count in chars:
		if char == ' ':
			if count <= 2:
				new_text += char * count
			else:
				qtd = count / 255
				remain = count % 255
				for i in range(qtd):
					new_text += '$' + chr(255)
				new_text += '$' + chr(remain)				
		elif char == '0':
			if count <= 2:
				new_text += char * count
			else:
				qtd = count / 255
				remain = count % 255
				for i in range(qtd):
					new_text += '#' + chr(255)
				new_text += '#' + chr(remain)	
		else:
			new_text += char * count
		
	print new_text
