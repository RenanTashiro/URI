/*
Nome:      Ajude o Sr. Barriga
ID:        1913
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.364s
Tamanho:   1,83 KB
Submissao: 14/08/17 13:23:29
*/
#include <bits/stdc++.h>

using namespace std;

#define VERMELHO 0
#define LARANJA 1
#define VERDE 2
#define AZUL 3

map<string,int> color_tb = {
    {"VERMELHO", 0},
    {"LARANJA",  1},
    {"VERDE",    2},
    {"AZUL",     3}
};

struct Cylinder {
    int height, radius, color;
    Cylinder() {}
    Cylinder(int h, int r, int c) : height(h), radius(r), color(c) {}
    bool operator<(const Cylinder &other) const {
        return radius < other.radius;
    }
};

bool can_stack(int under_ccolor, Cylinder cylinder)
{
    return (cylinder.color == VERMELHO && under_ccolor != LARANJA)
        || (cylinder.color == LARANJA && under_ccolor != AZUL)
        || (cylinder.color == AZUL && under_ccolor != VERDE)
        || (cylinder.color == VERDE && under_ccolor != VERMELHO)
        || under_ccolor == -1;
}

int dp[1000][1000][4];

int solve(int i, int radius, int color, const vector<Cylinder> &cylinder)
{
    if(i == (int)cylinder.size())
        return 0;

    if(color != -1 && dp[i][radius][color])
        return dp[i][radius][color];

    int ans = INT_MIN;

    if(cylinder[i].radius < radius && can_stack(color, cylinder[i]))
        ans = max(ans, cylinder[i].height + solve(i + 1, cylinder[i].radius, cylinder[i].color, cylinder));

    ans = max(ans, solve(i + 1, radius, color, cylinder));

    return dp[i][radius][color] = ans;
}

int main()
{
    int N;

    while(cin >> N && N)
    {
        vector<Cylinder> cylinder(N);

        for(int i = 0; i < N; i++)
        {
            string c;

            cin >> cylinder[i].height >> cylinder[i].radius >> c;

            cylinder[i].color = color_tb[c];
        }

        sort(cylinder.rbegin(), cylinder.rend());
        memset(dp, 0, sizeof dp);

        cout << solve(0, INT_MAX, -1, cylinder) << " centimetro(s)\n";
    }
}
