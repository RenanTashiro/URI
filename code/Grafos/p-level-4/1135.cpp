/*
Nome:      Colônia de Formigas
ID:        1135
Resposta:  Accepted
Linguagem: C++
Tempo:     1.024s
Tamanho:   1,54 KB
Submissao: 11/01/16 20:12:59
*/
#include <bits/stdc++.h>
 
using namespace std;
 
typedef vector<long long> vi; 
typedef pair<long long,long long> ii;

vector<vector<ii>> tree;
vi lca, lca_distance, level, branch;
int counter;

void create_opt_tree(long long u) 
{
	bool flag = false;
	if((int)tree[u].size() > 1) flag = true;
	for(ii i : tree[u]) {
		level[i.first] = level[u] + 1;	
		if(flag) {
			lca[i.first] = u;	
			lca_distance[i.first] = i.second; 	
			branch[i.first]	= counter++;
		}
		else {     
			lca[i.first] = lca[u];
			lca_distance[i.first] = lca_distance[u] + i.second;			
			branch[i.first] = branch[u];
		}
		create_opt_tree(i.first);
	}
}

long long LCA_Distance(int a, int b) 
{
	if(lca[a] == lca[b]) {
		if(branch[a] != branch[b])
			return lca_distance[a] + lca_distance[b];
		else 
			return abs(lca_distance[a] - lca_distance[b]);
	}
	if(level[lca[a]] > level[lca[b]]) {
		return lca_distance[a] + LCA_Distance(lca[a], b);
	}
	return lca_distance[b] + LCA_Distance(a, lca[b]);
}

int main()
{
    int N;
 
    while(scanf("%d", &N) && N != 0) 
    {
		tree.assign(N, vector<ii>()); lca.assign(N,0); lca_distance.assign(N,0);
		level.assign(N,0); branch.assign(N,0); 
		counter = 0;
		
		int v, w;
		
		for(int i = 1; i < N; i++) {
			scanf("%d%d", &v, &w);
			tree[v].push_back(ii(i, w));
		}
		
		create_opt_tree(0);
		
		int Q, S, T;
		
		scanf("%d", &Q);
		
		for(int i = 0; i < Q; i++) {
			scanf("%d%d", &S, &T);
			if(i) printf("%c", ' ');
			cout << LCA_Distance(S, T);
		}
		
		puts("");
    }
}
