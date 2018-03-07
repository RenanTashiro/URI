/*
Nome:      Mesa da Sra. Montagny!
ID:        2131
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.160s
Tamanho:   1,12 KB
Submissao: 02/02/18 09:15:34
*/
#include <bits/stdc++.h>
using namespace std;

#define V 105

int graph[105][105];

bool isBipartite(int src)
{
    int colorArr[V];
    
    for (int i = 0; i < V; ++i)
        colorArr[i] = -1;

    colorArr[src] = 1;
 
    queue <int> q;
    q.push(src);
 
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
 
        for (int v = 0; v < V; ++v)
        {
            if (graph[u][v] && colorArr[v] == -1)
            {
                colorArr[v] = 1 - colorArr[u];
                q.push(v);
            }
 
            else if (graph[u][v] && colorArr[v] == colorArr[u])
                return false;
        }
    }
 
    return true;
}

int main()
{
    int n, m, instancia = 1;

    while(scanf("%d%d", &n, &m) != EOF)
    {
		memset(graph, 0, sizeof graph);
		
        int u, v;

        for(int i = 0; i < m; i++)
        {
            scanf("%d%d", &u, &v);
            u--, v--;
            graph[u][v] = 1;
            graph[v][u] = 1;
        }
        
        printf("Instancia %d\n%s\n\n", instancia++, isBipartite(0) ? "sim" : "nao");
    }
}

