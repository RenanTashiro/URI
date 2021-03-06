/*
Nome:      Quem Vai Ser Reprovado?
ID:        2134
Resposta:  Accepted
Linguagem: C++
Tempo:     0.016s
Tamanho:   566 Bytes
Submissao: 14/07/16 21:25:56
*/
#include <bits/stdc++.h>

using namespace std;

typedef pair<int,string> ii;

bool comparator(ii a, ii b)
{
	if(a.first == b.first)
		return a.second < b.second;
	return a.first > b.first;
}

int main()
{
	int K, instance = 1;
	
	while(scanf("%d", &K) != EOF)
	{
		printf("Instancia %d\n", instance++);
		
		vector<ii> alunos(K);
		
		for(int i = 0; i < K; i++)
		{
			cin >> alunos[i].second >> alunos[i].first;
		}
		
		sort(alunos.begin(), alunos.end(), comparator);
		
		cout << alunos[K-1].second << endl;
		
		puts("");
	}
}
