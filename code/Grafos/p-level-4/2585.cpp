/*
Nome:      Dominó Incompleto
ID:        2585
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   912 Bytes
Submissao: 01/02/18 13:47:49
*/
#include <bits/stdc++.h>
using namespace std;

int ans;

void go(int p, int d, vector<int> visited, pair<int,int> pieces[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(!visited[i]) {
            int l = pieces[i].first, r = pieces[i].second;
            vector<int> nvisited = visited;

            nvisited[i] = 1;

            if(l == p || p == -1)
                go(r, d+1, nvisited, pieces, n);
            if(r == p || p == -1)
                go(l, d+1, nvisited, pieces, n);
        }
    }

    ans = max(ans, d);
}

int main()
{
    int n;

    while(scanf("%d", &n) != EOF)
    {
        pair<int,int> pieces[n];

        for(int i = 0; i < n; i++)
            scanf("%d%d", &pieces[i].first, &pieces[i].second);

        ans = 0;
        vector<int> visited(n, 0);

        go(-1, 0, visited, pieces, n);

        printf("%d\n", ans);
    }
}
