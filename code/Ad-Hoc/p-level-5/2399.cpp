/*
Nome:      Campo Minado
ID:        2399
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   470 Bytes
Submissao: 11/06/17 09:59:49
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	cin >> N;
	
	int mines[N];
	
	for(int i = 0; i < N; i++)
	{
		cin >> mines[i];
	}
	
	
	if(N == 1)
	{
		printf("%d\n", mines[0]);
		return 0;
	}
	
	for(int i = 0; i < N; i++)
	{
		if(i == 0) 
			printf("%d\n", mines[0] + mines[1]);
		else if(i == N - 1) 
			printf("%d\n", mines[N-2] + mines[N-1]);
		else 
			printf("%d\n", mines[i-1] + mines[i] + mines[i+1]);
	}
}
