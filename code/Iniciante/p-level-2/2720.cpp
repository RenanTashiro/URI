/*
Nome:      Presentes Grandes
ID:        2720
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.832s
Tamanho:   616 Bytes
Submissao: 23/12/17 10:00:57
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	
	cin >> T;
	
	while(T--)
	{
		int N, K;
		
		cin >> N >> K;
		
		vector<pair<int,int>> gift;
		
		for(int i = 0; i < N; i++)
		{
			int idx, h, w, l;
			
			cin >> idx >> h >> w >> l;
			
			gift.push_back({-(h * w * l), idx});
		}
		
		vector<int> sol;
		
		sort(gift.begin(), gift.end());
		
		for(int i = 0; i < K; i++)		
			sol.push_back(gift[i].second);					
		
		sort(sol.begin(), sol.end());
		
		cout << sol[0];
		
		for(int i = 1; i < K; i++) 
			cout << ' ' << sol[i];
		
		cout << endl;
	}
}
