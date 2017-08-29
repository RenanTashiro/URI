/*
Nome:      Duas Notas
ID:        2140
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   482 Bytes
Submissao: 14/07/16 20:38:08
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int notas[] = {2, 5, 10, 20, 50, 100};
	int N, M;
	
	while(scanf("%d%d", &N, &M) && (N != 0 || M != 0))
	{
		int troco = M - N;
		bool flag = false;
		
		for(int i = 0; i < 6 && !flag; i++)
		{
			for(int j = i + 1; j < 6; j++)
			{		
				if(troco - (notas[i] + notas[j]) == 0) {
					flag = true;
					break;
				}
					
			}
		}
		
		printf("%s\n", flag ? "possible" : "impossible");
	}
}
