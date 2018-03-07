/*
Nome:      Quadrado
ID:        2471
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1,05 KB
Submissao: 19/12/16 14:35:14
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	scanf("%d", &N);
	
	int square[N][N];
	
	for(int i = 0; i < N; i++)
		for(int j = 0; j < N; j++)
			scanf("%d", &square[i][j]);
	
	int row_sum[N], col_sum[N]; 
	
	memset(row_sum, 0, sizeof row_sum);
	memset(col_sum, 0, sizeof col_sum);
	
	for(int i = 0; i < N; i++)
		for(int j = 0; j < N; j++)
			row_sum[i] += square[i][j];
			
	for(int i = 0; i < N; i++)
		for(int j = 0; j < N; j++)
			col_sum[j] += square[i][j];

	map<int,int> value;
	
	for(int i = 0; i < N; i++) {
		value[row_sum[i]]++;
		value[col_sum[i]]++;
	}
		
	int k = 0, v = INT_MAX, t = 0, x = 0;
		
	for(map<int,int>::iterator it = value.begin(); it != value.end(); it++) {
		if(it->second < v) {
			k = it->first;
			v = it->second;
		} 
		if(it->second > x) {
			t = it->first;
			x = it->second;
		}
	}

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			if(row_sum[i] == k && col_sum[j] == k)
				printf("%d %d\n", (t - k) + square[i][j], square[i][j]);
		}
	}					
}
