/*
Nome:      Frequencia na Aula
ID:        2410
Resposta:  Accepted
Linguagem: C++
Tempo:     0.060s
Tamanho:   352 Bytes
Submissao: 10/06/17 18:44:19
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	cin >> N;
	
	int freq[1000005] = {0};
	
	for(int i = 0; i < N; i++)
	{
		int V;	
		
		cin >> V;
		
		freq[V]++;
	}
	
	int ans = N;
	
	for(int i = 0; i <= 1000000; i++)
	{
		if(freq[i] > 1)
		{
			ans -= freq[i] - 1;
		}
	}
	
	cout << ans << endl;
}
