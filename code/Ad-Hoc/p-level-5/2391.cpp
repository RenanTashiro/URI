/*
Nome:      Progressões Aritméticas
ID:        2391
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.064s
Tamanho:   409 Bytes
Submissao: 11/06/17 09:44:33
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	cin >> N;
	
	int seq[N];
	
	for(int i = 0; i < N; i++)
	{	
		cin >> seq[i];
	}
	
	int cut = 1;
	
	if(N != 1)
	{
		int pa = seq[1] - seq[0];
		
		for(int i = 2; i < N; i++)
		{
			if(seq[i] - seq[i-1] != pa)
			{
				if(i + 1 < N) pa = seq[i+1] - seq[i];
				cut++;
			}
		}
	}	
	
	cout << cut << endl;
}
