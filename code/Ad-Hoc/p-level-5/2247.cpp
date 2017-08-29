/*
Nome:      Cofrinhos da Vó Vitória
ID:        2247
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   331 Bytes
Submissao: 01/10/16 10:36:58
*/
#include <cstdio>
using namespace std;

int main()
{
	int N, test = 1;
	
	while(scanf("%d", &N) && N != 0)
	{
		int J = 0, Z = 0, diff = 0;
		
		printf("Teste %d\n", test++);
		
		for(int k = 0; k < N; k++)
		{
			scanf("%d%d", &J, &Z);
			diff += J - Z;
			printf("%d\n", diff);
		}
		
		
		puts("");
	}
}
