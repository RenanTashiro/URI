/*
Nome:      Aeroporto
ID:        2227
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.020s
Tamanho:   712 Bytes
Submissao: 13/02/18 10:29:48
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, v, t = 1;
	
	while(scanf("%d%d", &a, &v) && a != 0)
	{
		//~ if(t != 1)
			//~ puts("");
			
		vector<int> count(a, 0);
		int x, y;
		
		for(int i = 0; i < v; i++)
		{
			scanf("%d%d", &x, &y); x--; y--;
			count[x]++;
			count[y]++;
		}
		
		vector<pair<int,int>> airport;
		
		for(int i = 0; i < a; i++)
			airport.push_back({count[i], -i});
			
		sort(airport.rbegin(), airport.rend());
		
		int maX = airport[0].first;
		
		printf("Teste %d\n", t++);
		
		for(int i = 0; i < a; i++)
			if(airport[i].first == maX)
				printf("%d ", -airport[i].second+1);
			else
				break;
				
		puts("\n");
	}
}
