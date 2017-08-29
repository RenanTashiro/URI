/*
Nome:      A Biblioteca do Senhor Severino
ID:        2137
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   311 Bytes
Submissao: 14/07/16 20:54:24
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	
	while(scanf("%d", &N) != EOF)
	{
		vector<string> repo(N);
		
		for(int i = 0; i < N; i++)		
			cin >> repo[i];
		
		
		sort(repo.begin(), repo.end());
		
		for(int i = 0; i < N; i++)
			cout << repo[i] << endl;
	}
}
