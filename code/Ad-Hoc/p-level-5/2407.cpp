/*
Nome:      Quadrado Mágico
ID:        2407
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.108s
Tamanho:   1,08 KB
Submissao: 04/02/18 18:00:57
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	
	scanf("%d", &n);
	
	int sq[n][n], visited[n*n+5];
	bool is_magic = true;
	
	memset(visited, 0, sizeof visited);
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			scanf("%d", &sq[i][j]);
			visited[sq[i][j]]++;			
			if(visited[sq[i][j]] > 1)
				is_magic = false;
		}
	}
	
	int value = 0;
		
	for(int i = 0; i < n; i++)
		value += sq[0][i];
		
	// check line
	for(int i = 0; i < n; i++) {
		int sum = 0;
		
		for(int j = 0; j < n; j++) {
			sum += sq[i][j];
		}		
		
		if(sum != value)
		{
			is_magic = false;
			break;
		}
	}
	
	// check col
	for(int i = 0; i < n; i++) {
		int sum = 0;
		
		for(int j = 0; j < n; j++) {
			sum += sq[j][i];
		}		
		
		if(sum != value)
		{
			is_magic = false;
			break;
		}
	}
	
	// check diag
	int d1 = 0, d2 = 0;
	
	for(int i = 0; i < n; i++) {
		d1 += sq[i][i];
		d2 += sq[i][n-i-1];
	}
	
	if(d1 != value || d2 != value)
		is_magic = false;
		
	if(is_magic)
		printf("%d\n", value);
	else
		puts("0");
}
