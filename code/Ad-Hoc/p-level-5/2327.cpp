/*
Nome:      Quadrados
ID:        2327
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   962 Bytes
Submissao: 11/06/17 10:32:54
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	cin >> N;
	
	int square[N][N];
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cin >> square[i][j];
		}
	}
	
	int sum = 0;
	bool is_magic = true;
	
	// get sum value
	for(int i = 0; i < N; i++) sum += square[0][i];
	
	// rows
	for(int i = 1; i < N && is_magic; i++)
	{
		int asum = 0;
		
		for(int j = 0; j < N; j++)
		{
			asum += square[i][j];
		}
		
		if(sum != asum) is_magic = false;
	}
	
	// colums
	for(int j = 0; j < N && is_magic; j++)
	{
		int asum = 0;
		
		for(int i = 0; i < N; i++)
		{
			asum += square[i][j];
		}
		
		if(sum != asum) is_magic = false;
	}
	
	// diag-lr
	int asumlr = 0, asumrl = 0;
	
	for(int i = 0; i < N; i++)
	{
		asumlr += square[i][i];
		asumrl += square[i][N-i-1];
	}
	
	if(sum != asumlr || sum != asumrl) is_magic = false;
	
	cout << (is_magic ? sum : -1) << endl;
}
