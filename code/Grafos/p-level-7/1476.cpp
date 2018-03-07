/*
Nome:      Caminhão
ID:        1476
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     1.408s
Tamanho:   3,6 KB
Submissao: 27/01/18 10:16:32
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef pair<ii, int> iii;

#define MAX_NODES 20005
#define LOG_MAX_NODES 30 // lb(MAX_NODES)

struct SimpleHash {
    size_t operator()(const std::pair<int, int>& p) const {
        return p.first ^ p.second;
    }
};

int num_nodes, log_num_nodes, root;
int A[MAX_NODES][LOG_MAX_NODES];
int L[MAX_NODES];
map<pair<int,int>, int> W;

vector<vector<ii>> prim(vector<ii> graph[], int N)
{
	vector<vector<ii>> tree(N);
	priority_queue<iii> next;
	vector<int> visited(N, 0);
	
	visited[0] = 1;
	
	for(ii node : graph[0])
		next.push({node, 0});
		
	while(!next.empty())
	{
		iii node = next.top(); next.pop();
		int w = node.first.first;
		int u = node.first.second;	
		int father = node.second;
		
		if(visited[u])
			continue;
		
		tree[father].push_back({w, u});
		//~ tree[u].push_back({w, father});
		visited[u] = 1;
	
			
		for(ii next_node : graph[u])	
			if(!visited[next_node.second])
				next.push({next_node, u});
		
	}
	
	return tree;
}

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

void DFS(int i, int l, const vector<vector<ii>> &tree)
{
    L[i] = l;
    for(int j = 0; j < (int)tree[i].size(); j++)
		DFS(tree[i][j].second, l+1, tree);
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

void set_p(int u, int p, const vector<vector<ii>> &tree)
{
	A[u][0] = p;
	
    for(int j = 0; j < (int)tree[u].size(); j++)
		set_p(tree[u][j].second, u, tree);
}

void set_w(int u, int p, vector<int> &path, const vector<vector<ii>> &tree)
{
	//~ W[u][u] = INT_MAX;
	W[{u, u}] = INT_MAX;
	
	for(int pp: path)
		W[{u, pp}] = min(W[{u, p}], W[{p, pp}]);

	path.push_back(u);

	for(int i = 0; i < (int)tree[u].size(); i++) {		
		int v = tree[u][i].second;
		int w = tree[u][i].first;

		W[{v, u}] = w;
		set_w(v, u, path, tree);
	}	

	path.pop_back();
}

int main()
{
	int m, s;
	
	while(scanf("%d%d%d", &num_nodes, &m, &s) != EOF)
	{
		log_num_nodes = lb(num_nodes);
		
		vector<ii> graph[num_nodes];
		int a, b, p;			
		
		
		for(int i = 0; i < m; i++)
		{
			scanf("%d%d%d", &a, &b, &p);			
			
			graph[a-1].push_back({p, b-1});
			graph[b-1].push_back({p, a-1});
		}
		
		// find maximum spanning tree
		vector<vector<ii>> tree = prim(graph, num_nodes);
		
		// set parents		
		set_p(0, -1, tree);
		root = 0;
		
		// precompute A using dynamic programming
		for(int j = 1; j <= log_num_nodes; j++)
			for(int i = 0; i < num_nodes; i++)
				if(A[i][j-1] != -1)
					A[i][j] = A[A[i][j-1]][j-1];
				else
					A[i][j] = -1;
		// precompute L
		DFS(root, 0, tree);
		// set W
		vector<int> path;
		
		set_w(0, -1, path, tree);
		
		// query
		while(s--)
		{
			scanf("%d%d", &a, &b);
			
			int lca = LCA(a-1, b-1);
			
			printf("%d\n", min(W[{a-1, lca}], W[{b-1, lca}]));
		}
	}
}
