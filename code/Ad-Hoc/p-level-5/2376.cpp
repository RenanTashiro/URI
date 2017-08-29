/*
Nome:      Copa do Mundo
ID:        2376
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   718 Bytes
Submissao: 10/06/17 19:01:32
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	char team[] = "ABCDEFGHIJKLMNOP";
	
	for(int i = 0; i < 15; i++)
	{
		int N, M;
		
		cin >> N >> M;
		
		if(i < 8)
		{
			if(N > M)
				team[i] = team[i * 2];
			else
				team[i] = team[i * 2 + 1];
		}
		else if(i < 12)
		{
			if(N > M)
				team[i - 8] = team[(i - 8) * 2];
			else
				team[i - 8] = team[(i - 8) * 2 + 1];			
		}
		else if(i < 14)
		{
			if(N > M)
				team[i - 12] = team[(i - 12) * 2];
			else
				team[i - 12] = team[(i - 12) * 2 + 1];	
		}
		else
		{
			if(N > M)
				team[i - 14] = team[(i - 14) * 2];
			else
				team[i - 14] = team[(i - 14) * 2 + 1];	
		}
	}
	
	cout << team[0] << endl;
}
