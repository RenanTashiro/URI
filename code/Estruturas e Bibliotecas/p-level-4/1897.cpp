/*
Nome:      Jogo Esperto
ID:        1897
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.244s
Tamanho:   1,11 KB
Submissao: 04/01/16 12:10:03
*/
#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;

int BFS(int ori, int dest)
{
	queue<ii> Q;
	unordered_map<int,int> W;
	Q.push(ii(ori, 0));
	while(!Q.empty()) {
		ii act = Q.front(); Q.pop();
		if(act.first == dest) {
			return -act.second;
		}
		if(W[act.first*2] > act.second-1) {
			Q.push(ii(act.first*2, act.second-1));
			W[act.first*2] = act.second-1;
		}
		if(W[act.first*3] > act.second-1) {
			Q.push(ii(act.first*3, act.second-1));
			W[act.first*3] = act.second-1;
		}
		if(W[act.first/2] > act.second-1) {
			Q.push(ii(act.first/2, act.second-1));
			W[act.first/2] = act.second-1;
		}
		if(W[act.first/3] > act.second-1) {
			Q.push(ii(act.first/3, act.second-1));
			W[act.first/3] = act.second-1;
		}
		if(W[act.first+7] > act.second-1) {
			Q.push(ii(act.first+7, act.second-1));			
			W[act.first+7] = act.second-1;
		}
		if(W[act.first-7] > act.second-1) {
			Q.push(ii(act.first-7, act.second-1));
			W[act.first-7] = act.second-1;
		}
	}
	return -1;
}

int main()
{
	int N, M;
	
	scanf("%d%d", &N, &M);
	
	printf("%d\n", BFS(N, M));
}
