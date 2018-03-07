/*
Nome:      Invertendo Setas
ID:        2576
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.208s
Tamanho:   1,59 KB
Submissao: 12/06/17 19:45:36
*/
#include <bits/stdc++.h>
using namespace std;

//#define SECOND second.first
//#define THIRD second.second
//#define mk(a, b, c) iii(a, ii(b, c))

typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<int> vi;
typedef vector<ii> vii;

int solve(vector<vii> graph, int A, int B)
{
    priority_queue<ii, vector<ii>, greater<ii>> next;
    vi visited(graph.size(), 0);

    next.push(ii(0, A)); // changes, vertex

    while(!next.empty())
    {
        ii u = next.top();
        next.pop();

        if(u.second == B) return u.first;

        if(visited[u.second]) continue;

        visited[u.second] = 1;

        for(int i = 0; i < (int)graph[u.second].size(); i++)
        {
            if(graph[u.second][i].second)
            {
                next.push(ii(u.first, graph[u.second][i].first));
            }
            else
            {
                next.push(ii(u.first + 1, graph[u.second][i].first));
            }
        }
    }

    return INT_MAX;
}

int main()
{
    int C, S, A, B;

    scanf("%d%d%d%d", &C, &S, &A, &B);

    vector<vii> graph(C);

    for(int i = 0; i < S; i++)
    {
        int c1, c2;

        scanf("%d%d", &c1, &c2);

        graph[c1-1].push_back(ii(c2-1, 1));
        graph[c2-1].push_back(ii(c1-1, 0));
    }

    int bibi = solve(graph, A-1, B-1);
    int bibika = solve(graph, B-1, A-1);

    if(bibi < bibika)
    {
        printf("Bibi: %d\n", bibi);
    }
    else if(bibika < bibi)
    {
        printf("Bibika: %d\n", bibika);
    }
    else
    {
        puts("Bibibibika");
    }
}
