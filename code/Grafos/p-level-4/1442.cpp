/*
Nome:      Desvio de Rua
ID:        1442
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.096s
Tamanho:   3,54 KB
Submissao: 01/02/18 17:04:39
*/
/*
1. Tira
2. Ve se eh SCC
    Se sim ja sabe a resposta (-)
3. Ve se eh possivel
    Pega a versao bidirecional e ve se eh SCC
        Se nao ja sabe a resposta (*)
4. Verifica se existe alguma ponte
    Se sim a resposta eh (2)
    Se nao a resposta eh (1)
*/
#include <bits/stdc++.h>
using namespace std;

int n, m;
const int MAXN = 1005;
vector<int> g[MAXN], type[MAXN];
bool used[MAXN];
int timer, c1[MAXN], c2[MAXN], tin[MAXN], fup[MAXN], _count, yes = 0;

// BRIDGE
void dfs (int v, int p = -1) {
    used[v] = true;
    tin[v] = fup[v] = timer++;
    for (size_t i = 0; i < g[v].size(); ++i) {
        int to = g[v][i], t = type[v][i];
        
		c1[v]++;
        c2[to]++;
        
        if (to == p)  continue;
        
        if (used[to]) {
            fup[v] = min (fup[v], tin[to]);
		}
        else {
            dfs (to, v);
            fup[v] = min (fup[v], fup[to]);
            if (fup[to] > tin[v] && t == 1) {
                yes++;          
			}
        }
    }
}

void find_bridges() {
    yes = _count = 0;
    timer = 0;
    
    for (int i = 0; i < n; ++i) {
        used[i] = false;
        c1[i] = c2[i] = 0;
	}
    for (int i = 0; i < n; ++i)
        if (!used[i])
            dfs (i);
            
    for(int i = 0; i < n; i++) {
        if((c1[i] == 0 && c2[i] <= 1) || (c1[i] <= 1 && c2[i] == 0)) {
            _count = 1;
        }
    }
    
    if(_count == 0)
		_count = yes > 100;
}

// SCC
void dfs(int u, int &visited_count, vector<int> &visited, vector<int> graph[])
{
    visited[u] = 1;
    visited_count++;

    for(int i = 0; i < (int)graph[u].size(); i++) {
        int v = graph[u][i];

        if(!visited[v])
            dfs(v, visited_count, visited, graph);
    }
}

bool isSCC(vector<int> g[], vector<int> rg[])
{
    vector<int> visited1(n, 0), visited2(n, 0);
    int go = 0, og = 0;

    dfs(0, go, visited1, g);
    dfs(0, og, visited2, rg);

    return go == n && og == n;
}

int main()
{
    while(scanf("%d%d", &n , &m) != EOF)
    {
        // reset variables
        for(int i = 0; i < n; i++) {
            g[i].clear();
            type[i].clear();
		}

        // input
        vector<int> biG[n], rG[n];
        int a, b, t;

        for(int i = 0; i < m; i++)
        {
            scanf("%d%d%d", &a, &b, &t); a--; b--;

            if(i != 0) {
                if(t == 1) {
                    g[a].push_back(b);
                    rG[b].push_back(a);
                    type[a].push_back(1);
                } else {
                    g[a].push_back(b);
                    g[b].push_back(a);
                    rG[a].push_back(b);
                    rG[b].push_back(a);
                    type[a].push_back(2);
                    type[b].push_back(2);
                }

                biG[a].push_back(b);
                biG[b].push_back(a);
            }
        }

        // processing
        if(isSCC(g, rG)) {
            puts("-");
        } else {
            vector<int> visited(n, 0);
            int c = 0;

            dfs(0, c, visited, biG);

            if(c != n) {
                puts("*");
            } else {
                find_bridges();

                if(_count != 0) {
                    puts("2");
                    //~ cout << 2 << ' ' << _count << ' ' << yes << endl;
                } else {
                    puts("1");
                    //~ cout << 1 << ' ' << _count << ' ' << yes << endl;
                }
            }
        }
    }
}


