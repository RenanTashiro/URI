/*
Nome:      Proteja sua Senha
ID:        2287
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   764 Bytes
Submissao: 15/02/18 14:43:22
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, t = 1;
	
	while(scanf("%d", &n) && n != 0)
	{
		int cod[n][10], dig[n][6];
		
		for(int k = 0; k < n; k++)
		{
			for(int i = 0; i < 10; i++)
				scanf("%d", &cod[k][i]);
			
			char c;
			
			for(int i = 0; i < 6; i++) {
				scanf(" %c", &c);
				dig[k][i] = c-'A';
			}
		}
		
		printf("Teste %d\n", t++);
		
		for(int j = 0; j < 6; j++)
		{
			vector<int> count(10, 0);
			
			for(int i = 0; i < n; i++)
			{
				int index = dig[i][j];			
				count[cod[i][2*index]]++;
				count[cod[i][2*index+1]]++;
			}
			
			for(int i = 0; i < 10; i++) {
				if(count[i] == n) {
					printf("%d ", i);
					break;
				}
			}
		}
		
		puts("\n");
	}
}



