#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

vector<vector<pair<int,int>>> G(1005);
int room_w[1005];

//~ vector<int> dijkstra(int src, int S)
int dijkstra(int src, int S)
{
	queue<int> Q;
	vector<int> W(S, INT_MAX);
	Q.push(src); // node, weight
	
	while(!Q.empty())
	{
		int u = Q.front(); Q.pop();
		for(ii v : G[u])
		{
			if(src == u)
			{
				W[v.first] = v.second + room_w[v.first];
				Q.push(v.first);
			}
			else if(W[u] + v.second + room_w[v.first] < W[v.first])
			{
				W[v.first] = W[u] + v.second + room_w[v.first];
				Q.push(v.first);
			}
		}
	}
	
	//~ return W;
	return W[src];
}

int solve(int S)
{
	int ans = INT_MAX;
	
	for(int i = 0; i < S; i++)
	{
		ans = min(ans, dijkstra(i, S));
	}
	
	//~ vector<int> d = dijkstra(0, S);
	
	//~ for(int i = 0; i < (int)d.size(); i++)
	//~ {
		//~ printf("%d:%d\n", i, d[i]);
	//~ }
	
	return ans;
}

int main()
{
	int S, C;
	
	scanf("%d%d", &S, &C);
	
	for(int i = 0; i < S; i++)
	{
		scanf("%d", &room_w[i]);
	}
	
	int I, F, T;
	
	for(int i = 0; i < C; i++)
	{
		scanf("%d%d%d", &I, &F, &T);
		G[I-1].push_back(ii(F-1, T));
	}
	
	printf("%d\n", solve(S));
}
