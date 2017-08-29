/*
Nome:      Guerra por Território
ID:        2420
Resposta:  Accepted
Linguagem: C++
Tempo:     0.044s
Tamanho:   438 Bytes
Submissao: 11/06/17 09:19:41
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	cin >> N;
	
	vector<int> asum(N, 0);
	int sum = 0;
	
	for(int i = 0; i < N; i++)
	{
		int value;
		
		cin >> value;
		
		sum += value;
		
		if(i == 0) asum[0] = value;
		else asum[i] = value + asum[i-1]; 
	}
	
	int half_sum = sum / 2;
	
	for(int i = 0; i < N; i++)
	{
		if(asum[i] == half_sum)
		{
			cout << i + 1 << endl;
		}
	}
}
