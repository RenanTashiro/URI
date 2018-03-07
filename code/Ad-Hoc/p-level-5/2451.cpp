/*
Nome:      PacMan
ID:        2451
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   608 Bytes
Submissao: 10/06/17 17:55:28
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	scanf("%d", &N);

	string row;
	int ans = 0, act_solution = 0;
	
	for(int i = 0; i < N; i++)
	{
		cin >> row;
		
		if(i % 2)
		{
			for(int j = N - 1; j >= 0; j--)
			{
				if(row[j] == 'o') act_solution++;
				if(row[j] == 'A') ans = max(ans, act_solution), act_solution = 0;				
			}
		}
		else
		{
			for(int j = 0; j < N; j++)
			{
				if(row[j] == 'o') act_solution++;
				if(row[j] == 'A') ans = max(ans, act_solution), act_solution = 0;
			}
		}
	}
	
	cout << max(ans, act_solution) << endl;
}
