/*
Nome:      Tapioca e a Chuva de Trufas
ID:        1927
Resposta:  Accepted
Linguagem: C++
Tempo:     0.020s
Tamanho:   1,06 KB
Submissao: 15/08/17 10:23:58
*/
#include <bits/stdc++.h>
using namespace std;

struct Trufa {
    int x, y, t;
    bool operator<(const Trufa &other) const {
        return t < other.t;
    }
};

int dist(int x1, int y1, int x2, int y2)
{
    return abs(x2 - x1) + abs(y2 - y1);
}

int dp[21][21][2000]; // t varia, mas nao eh importante por causa que i ja carrega essa informacao

int solve(int i, int t, int x, int y, const vector<Trufa> &trufa)
{
    if(i == (int)trufa.size())
        return 0;

    if(dp[x][y][i])
        return dp[x][y][i];

    int ans = INT_MIN;

    if(t + dist(x, y, trufa[i].x, trufa[i].y) <= trufa[i].t)
        ans = max(ans, 1 + solve(i + 1, trufa[i].t, trufa[i].x, trufa[i].y, trufa));

    ans = max(ans, solve(i + 1, t, x, y, trufa));

    return dp[x][y][i] = ans;
}

int main()
{
    int N;

    scanf("%d", &N);

    vector<Trufa> trufa(N);

    for(int i = 0; i < N; i++)
        scanf("%d%d%d", &trufa[i].x, &trufa[i].y, &trufa[i].t);

    sort(trufa.begin(), trufa.end());

    printf("%d\n", solve(0, 0, 6, 6, trufa));
}
