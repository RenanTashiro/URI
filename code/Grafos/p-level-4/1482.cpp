/*
Nome:      Noite no Museu
ID:        1482
Resposta:  Accepted
Linguagem: C++
Tempo:     1.328s
Tamanho:   1,12 KB
Submissao: 20/05/17 20:34:44
*/
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 20, deadline = 420;

int d[MAXN][MAXN];
int timeAt[MAXN];
int n;
bool mem[20][1<<MAXN];

int dfs(int c, int t, int vis, int numVis)
{
    if (mem[c][vis] == true) return 0;

    mem[c][vis] = true;

    int b = numVis;

    for (int i=0; i<n; ++i)
    {
        if (!((1 << i) & vis) && t + d[c][i] + timeAt[i] <= deadline)
        {
            b = max(b, dfs(i, t + d[c][i] + timeAt[i], vis | (1 << i), numVis + 1));
        }
    }

    return b;
}

int main(){

    while (cin >> n && n)
    {
        memset(mem, 0, sizeof mem);

        for (int i=0; i<n; ++i) scanf("%d", &timeAt[i]);

        for (int i=0; i<n; ++i)
        {
            for (int j=0; j<n; ++j)
            {
                scanf("%d", &d[i][j]);
            }
        }

        int best = 0;

        for (int start=0; start < n; ++start)
        {
            if (timeAt[start] <= deadline)
            {
                best = max(best, dfs(start, timeAt[start], 1<<start, 1));
            }
        }

        cout << best << endl;
    }
}
