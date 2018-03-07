/*
Nome:      O Tabuleiro Esburacado
ID:        2411
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   748 Bytes
Submissao: 07/02/18 17:00:47
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	pair<int,int> moves[] = { // row, col
		{-2, 1}, // move 1
		{-1, 2},
		{1, 2},
		{2, 1},
		{2, -1},
		{1, -2},
		{-1, -2},
		{-2, -1},
	};
	
	pair<int,int> holes[] = {{4, 1}, {4, 2}, {2, 2}, {3, 5}}; // row, col
	
	int n;
	
	scanf("%d", &n);
	
	pair<int,int> pos = {4, 4};
	int moves_count = 0, mi;
	bool fallen = false;
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &mi); mi--;
		
		if(!fallen) {
			pos.first += moves[mi].first;
			pos.second += moves[mi].second;
					
			for(int j = 0; j < 4; j++) {
				if(pos == holes[j]) {
					fallen = true;
					break;
				}
			}
				
			moves_count++;
		} 
	}
	
	printf("%d\n", moves_count);
}
