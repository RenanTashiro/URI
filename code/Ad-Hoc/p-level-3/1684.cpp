/*
Nome:      Maratona Doce
ID:        1684
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.116s
Tamanho:   526 Bytes
Submissao: 11/01/18 09:24:41
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	
	scanf("%d", &T);
	
	while(T--)
	{
		int N, M;
		
		scanf("%d%d", &N, &M);
		
		vector<int> graph[N];
		
		for(int i= 0; i < M; i++)
		{
			int a, b;
			
			scanf("%d%d", &a, &b);
			
			graph[a].push_back(b);
			graph[b].push_back(a);
		}
		
		bool possible = true;
		
		for(auto v : graph)
		{
			if(v.size() % 2 != 0) {
				possible = false;
				break;
			}
		}
		
		printf("%s\n", possible ? "Yes" : "No");
	}
}
