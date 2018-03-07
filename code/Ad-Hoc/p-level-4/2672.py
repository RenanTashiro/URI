/*
Nome:      Máscara de Rede
ID:        2672
Resposta:  Accepted
Linguagem: Python 3 (Python 3.4.3) [+1s]
Tempo:     0.044s
Tamanho:   844 Bytes
Submissao: 19/09/17 19:23:03
*/
import re

while True:
	try:		
		data = re.split('/| |\.', input())
	except:
		break
	if len(data) == 8:
		ip, mask = data[:4], data[4:]
		mask = sum(sum(int(b) for b in bin(int(m))[2:]) for m in mask)
	else:
		ip, mask = data[:4], int(data[4])
	ip = [bin(int(i))[2:] for i in ip]
	ip = [(8-len(i)) * '0' + i for i in ip]
	ip_net = ''.join(ip)[:mask] + ((32-mask) * '0')
	ip_broad = ''.join(ip)[:mask] + ((32-mask) * '1')
	ip_net = [int(ip_net[:8], 2), int(ip_net[8:16], 2), int(ip_net[16:24], 2), int(ip_net[24:32], 2)]
	ip_broad = [int(ip_broad[:8], 2), int(ip_broad[8:16], 2), int(ip_broad[16:24], 2), int(ip_broad[24:32], 2)]
	print('Endereco de rede:', '.'.join(str(i) for i in ip_net))
	print('Endereco de broadcast:', '.'.join(str(i) for i in ip_broad))
	print('Numero de maquinas:', 2 ** (32-mask) - 2)
	print()

