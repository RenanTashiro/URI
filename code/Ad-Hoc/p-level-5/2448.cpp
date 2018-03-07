/*
Nome:      Carteiro
ID:        2448
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.036s
Tamanho:   479 Bytes
Submissao: 10/06/17 16:30:35
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	
	scanf("%d%d", &N, &M);
	
	unordered_map<int,int> house;
	
	for(int i = 0; i < N; i++)
	{
		int number;
		
		scanf("%d", &number);
		
		house[number] = i;
	}
	
	int ans = 0, pos_actual = 0;
	
	for(int i = 0; i < M; i++)
	{
		int number;
		
		scanf("%d", &number);
		
		ans += abs(house[number] - pos_actual);
		
		pos_actual = house[number];
	}
	
	printf("%d\n", ans);
}
