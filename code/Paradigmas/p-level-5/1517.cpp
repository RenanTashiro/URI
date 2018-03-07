/*
Nome:      Maçãs
ID:        1517
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.036s
Tamanho:   1,09 KB
Submissao: 15/08/17 12:20:50
*/
#include <bits/stdc++.h>
using namespace std;

struct Apple {
    int x, y, t;
    bool operator<(const Apple &other) const {
        return t < other.t;
    }
};

int dist(int x1, int y1, int x2, int y2)
{
    return max(abs(x2 - x1), abs(y2 - y1));
}

int dp[21][21][2001];

int solve(int i, int t, int x, int y, const vector<Apple> &apple)
{
    if(i == (int)apple.size())
        return 0;

    if(dp[x][y][t])
        return dp[x][y][t];

    int ans = INT_MIN;

    if(t + dist(x, y, apple[i].x, apple[i].y) <= apple[i].t)
        ans = max(ans, 1 + solve(i + 1, apple[i].t, apple[i].x, apple[i].y, apple));

    ans = max(ans, solve(i + 1, t, x, y, apple));

    return dp[x][y][t] = ans;
}

int main()
{
    int N, M, K;

    while(scanf("%d%d%d", &N, &M, &K) && N)
    {
        vector<Apple> apple(K);

        for(int i = 0; i < K; i++)
            scanf("%d%d%d", &apple[i].x, &apple[i].y, &apple[i].t);

        int x, y;

        scanf("%d%d", &x, &y);

        memset(dp, 0, sizeof dp);

        printf("%d\n", solve(0, 0, x, y, apple));
    }
}
