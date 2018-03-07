/*
Nome:      Sinuca
ID:        2466
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   393 Bytes
Submissao: 10/06/17 17:49:18
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	scanf("%d", &N);
	
	vector<int> balls(N);
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &balls[i]);
	}
	
	for(int i = 0; i < N - 1; i++)
	{
		for(int j = 0; j < N - i - 1; j++)
		{
			balls[j] = balls[j] == balls[j+1] ? 1 : -1; 
		}
	}
	
	if(balls[0] == 1) puts("preta");
	else puts("branca");
}