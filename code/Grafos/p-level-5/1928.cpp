/*
Nome:      Jogo da Memória
ID:        1928
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.044s
Tamanho:   2,68 KB
Submissao: 27/01/18 13:49:18
*/
#include <bits/stdc++.h>
using namespace std;

#define MAX_NODES 50005
#define LOG_MAX_NODES 75 // lb(MAX_NODES)

int num_nodes, log_num_nodes, root;
int A[MAX_NODES][LOG_MAX_NODES];
int L[MAX_NODES];
vector<int> dist;

// floor of the binary logarithm of n
int lb(unsigned int n)
{
    if(n==0)
	return -1;
    int p = 0;
    if (n >= 1<<16) { n >>= 16; p += 16; }
    if (n >= 1<< 8) { n >>=  8; p +=  8; }
    if (n >= 1<< 4) { n >>=  4; p +=  4; }
    if (n >= 1<< 2) { n >>=  2; p +=  2; }
    if (n >= 1<< 1) {           p +=  1; }
    return p;
}

void DFS(int i, int l, vector<int> graph[], vector<int> &visited)
{
	visited[i] = 1;
    L[i] = l;
    
    for(int j = 0; j < (int)graph[i].size(); j++)
		if(!visited[graph[i][j]])
			DFS(graph[i][j], l+1, graph, visited);
}

int LCA(int p, int q)
{
    // ensure node p is at least as deep as node q
    if(L[p] < L[q])
	swap(p, q);
	
    // "binary search" for the ancestor of node p situated on the same level as q
    for(int i = log_num_nodes; i >= 0; i--)
	if(L[p] - (1<<i) >= L[q])
	    p = A[p][i];
    
    if(p == q)
	return p;
	
    // "binary search" for the LCA
    for(int i = log_num_nodes; i >= 0; i--)
		if(A[p][i] != -1 && A[p][i] != A[q][i])
		{
			p = A[p][i];
			q = A[q][i];
		}
    
    return A[p][0];
}

void set_parents(int u, int p, int d, vector<int> graph[], vector<int> &visited)
{
	visited[u] = 1;
	dist[u] = d;		
	A[u][0] = p;
	
	for(int v : graph[u])
		if(!visited[v])
			set_parents(v, u, d+1, graph, visited);
}

int main()
{	
	scanf("%d", &num_nodes);
	
	log_num_nodes = lb(num_nodes);
	
	int index[num_nodes/2][2], card;
	
	memset(index, -1, sizeof index);
	
	for(int i = 0; i < num_nodes; i++)
	{
		scanf("%d", &card); card--;
		
		if(index[card][0] == -1)
			index[card][0] = i;
		else
			index[card][1] = i;		
	}
	
	vector<int> graph[num_nodes];
	int a, b;
	
	for(int i = 0; i < num_nodes-1; i++)
	{
		scanf("%d%d", &a, &b);
		
		graph[a-1].push_back(b-1);
		graph[b-1].push_back(a-1);
	}

	// set parents
	vector<int> visited(num_nodes, 0);
	dist.assign(num_nodes, 0);
	set_parents(0, -1, 0, graph, visited);
	root = 0;
	
	// precompute A using dynamic programming
	for(int j = 1; j <= log_num_nodes; j++)
		for(int i = 0; i < num_nodes; i++)
			if(A[i][j-1] != -1)
				A[i][j] = A[A[i][j-1]][j-1];
			else
				A[i][j] = -1;
				
	// precompute L
	visited.assign(num_nodes, 0);
	DFS(root, 0, graph, visited);
	
	long long ans = 0;
	
	for(int i = 0; i < num_nodes/2; i++) {
		int u = index[i][0];
		int v = index[i][1];
		int lca = LCA(u, v);

		ans += dist[u] + dist[v] - 2LL*dist[lca];
	}
	
	printf("%lld\n", ans);
}
