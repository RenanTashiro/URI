/*
Nome:      Crepúsculo em Portland
ID:        2168
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   414 Bytes
Submissao: 25/07/16 22:26:02
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	
	scanf("%d", &N);
	
	int matrix[N+1][N+1];
	
	for(int i = 0; i < N+1; i++)
		for(int j = 0; j < N+1; j++)
			scanf("%d", &matrix[i][j]);
			
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++)
			printf("%c", (matrix[i][j] + matrix[i+1][j] + matrix[i][j+1] + matrix[i+1][j+1] > 1) ? 'S' : 'U');
		puts("");
	}
}

