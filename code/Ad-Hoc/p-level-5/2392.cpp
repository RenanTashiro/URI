/*
Nome:      Pulo do Sapo
ID:        2392
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   420 Bytes
Submissao: 11/06/17 09:36:53
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	
	cin >> N >> M;
	
	vector<bool> rocks(N, false);
	
	for(int i = 0; i < M; i++)
	{
		int P, D;
		
		cin >> P >> D;
		
		for(int j = P - 1; j < N; j += D)
		{
			rocks[j] = true;
		}
		
		for(int j = P - D - 1; j >= 0; j -= D)
		{
			rocks[j] = true;
		}
	}
	
	for(auto rock : rocks)
	{
		cout << rock << endl;
	}
}
