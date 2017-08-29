/*
Nome:      Entregadores de Steak
ID:        2046
Resposta:  Accepted
Linguagem: C++
Tempo:     0.640s
Tamanho:   1,09 KB
Submissao: 20/05/16 14:16:49
*/
#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;

int manhatten_distance(ii a, ii b)
{
	return abs(a.first-b.first) + abs(a.second-b.second);
}

void solve(ii u, vector<ii> steak_house)
{
	ii toCall(0,0);
	int min_distance = INT_MAX;
	
	for(ii v : steak_house) 
	{
		int distance = manhatten_distance(u, v);
		
		if(abs(v.first - u.first) > min_distance) break;
		
		if(distance < min_distance) {
			min_distance = distance;
			toCall = v;
		}
	}
	
	printf("%d %d\n", toCall.first, toCall.second);
}

int main()
{
	int N, M, instancia = 1;
	
	while(scanf("%d%d", &N, &M))
	{
		if(N == 0 && M == 0) break;
		if(instancia > 1) puts("");
		
		int K, L, x, y;
		vector<ii> steak_house;
		
		scanf("%d", &K);
		
		for(int i = 0; i < K; i++) {
			scanf("%d%d", &x, &y);
			steak_house.push_back(ii(x, y));
		}
		
		sort(steak_house.begin(), steak_house.end());
		
		scanf("%d", &L);
		
		printf("Instancia %d\n", instancia++);
					
		for(int i = 0; i < L; i++) {
			scanf("%d%d", &x, &y);
			solve(ii(x, y), steak_house);
		}				
	}
}
