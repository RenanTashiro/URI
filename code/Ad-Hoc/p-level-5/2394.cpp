/*
Nome:      Corrida 1
ID:        2394
Resposta:  Accepted
Linguagem: C++
Tempo:     0.004s
Tamanho:   443 Bytes
Submissao: 11/06/17 13:37:46
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	
	cin >> N >> M;
	
	int bstudent_idx = 0, bstudent_value = INT_MAX;
	
	for(int i = 0; i < N; i++)
	{
		int sum = 0;
		
		for(int j = 0; j < M; j++)
		{
			int value;
			
			cin >> value;
			
			sum += value;
		}
		
		if(bstudent_value > sum)
		{
			bstudent_idx = i;
			bstudent_value = sum;
		}
	}
	
	cout << bstudent_idx + 1 << endl;
}
