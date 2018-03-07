/*
Nome:      Troco
ID:        2446
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.216s
Tamanho:   537 Bytes
Submissao: 10/06/17 19:46:11
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int V, M;
	
	cin >> V >> M;
	
	vector<int> penny(M);
	int total = 0;
	
	for(int i = 0; i < M; i++)
	{
		cin >> penny[i];
		total += penny[i];
	}
	
	vector<int> subset(total + 1, 0);
	int max_so_far = 0;
	
	subset[0] = 1;
	
	for(int i = 0; i < M && !subset[V]; i++)
	{
		for(int j = max_so_far; j >= 0; j--)
		{
			if(subset[j])
				subset[j + penny[i]] = 1;
		}
		
		max_so_far += penny[i];
	}
	
	cout << (subset[V] ? "S" : "N") << endl;
}
