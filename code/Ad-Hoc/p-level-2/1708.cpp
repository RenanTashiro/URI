/*
Nome:      Volta
ID:        1708
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   194 Bytes
Submissao: 19/06/16 14:59:34
*/
#include <cstdio>

int main()
{
	int x, y;
	
	scanf("%d%d", &x, &y);
	
	int vx = x, vy = 0, it = 1;
	
	while(vx > vy) {
		vx += x;
		vy += y;
		it++;
	}
	
	printf("%d\n", it);
}