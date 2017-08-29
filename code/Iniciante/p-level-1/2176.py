"""
Nome:      Paridade
ID:        2176
Resposta:  Accepted
Linguagem: Python 3
Tempo:     0.044s
Tamanho:   135 Bytes
Submissao: 22/08/16 21:54:20
"""
def main():
	bits = input()
	if sum(bit == '1' for bit in bits) & 1:
		bits += '1'
	else:
		bits += '0'
	print(bits)
	
main()
