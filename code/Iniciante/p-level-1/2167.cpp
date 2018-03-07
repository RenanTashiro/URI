/*
Nome:      Falha do Motor
ID:        2167
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   367 Bytes
Submissao: 25/07/16 22:20:04
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	
	scanf("%d", &n);
		
	int vet[n];
	bool flag = false;
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &vet[i]);
	}
	
	for(int i = 1; i < n; i++)
	{
		if(vet[i] < vet[i-1]) {
			cout << i+1 << endl;
			flag = true;
			break;
		}
	}
	
	if(!flag)
		cout << 0 << endl;
}
