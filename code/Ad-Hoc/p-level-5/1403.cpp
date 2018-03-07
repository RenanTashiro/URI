/*
Nome:      Meu Avô é Famoso
ID:        1403
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.188s
Tamanho:   634 Bytes
Submissao: 10/06/17 11:10:27
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	
	while(cin >> N >> M && N)
	{
		vector<pair<int,int>> ranking(10005); // freq, id
		
		for(int i = 0; i < 10005; i++)
		{
			ranking[i] = {0, -i};
		}
		
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < M; j++)
			{
				int player;
				
				cin >> player;
				
				ranking[player].first++;
			}
		}
		
		sort(ranking.rbegin(), ranking.rend());
		
		int second_score = ranking[1].first;
		
		for(int i = 1; ranking[i].first == second_score; i++)
		{
			cout << -ranking[i].second << ' ';
		}
		
		cout << endl;
	}
}
