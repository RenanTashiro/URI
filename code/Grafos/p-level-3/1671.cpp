/*
Nome:      Código
ID:        1671
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.288s
Tamanho:   929 Bytes
Submissao: 02/07/17 17:48:39
*/
#include <bits/stdc++.h>
using namespace std;

stack<int> ans;

bool solve(int u, int mod, bool visited[], int n_visited, int max_states, int N)
{
    if(n_visited == max_states - N) return true;

    visited[u] = true;

    for(int i = 0; i < 10; i++)
    {
        int v = (u % mod) * 10 + i;

        if(!visited[v] && solve(v, mod, visited, n_visited + 1, max_states, N))
        {
            ans.push(i);
            return true;
        }
    }

    return false;
}

int main()
{
    int N;

    while(scanf("%d", &N) && N)
    {
        bool visited[1000005] = {};

        for(int i = 0; i < N; i++) printf("0");

        solve(0, ceil(pow(10, N-1)), visited, 1, ceil(pow(10, N)), N - 1);

        while(!ans.empty())
        {
            printf("%d", ans.top());
            ans.pop();
        }

        for(int i = 1; i < N; i++) printf("0");

        puts("");
    }
}