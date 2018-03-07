/*
Nome:      Navegador Web
ID:        2635
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.016s
Tamanho:   343 Bytes
Submissao: 04/02/18 09:37:08
*/
def main():
	words = [input() for i in range(int(input()))]
	query = [input() for i in range(int(input()))]

	for q in query:
		count = 0
		max_length = 0	
		for w in words:
			if w.find(q) == 0:
				count += 1
				max_length = max(max_length, len(w))
		if count != 0:
			print(count, max_length)
		else:
			print(-1)

main()
