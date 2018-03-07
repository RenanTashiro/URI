/*
Nome:      Empilhando Presentes
ID:        2024
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.088s
Tamanho:   1,23 KB
Submissao: 15/08/17 10:05:47
*/
#include <bits/stdc++.h>
using namespace std;

#define A 0
#define B 1
#define C 2

int dp[3][3][100000];

bool fit(int h1, int w1, int h2, int w2)
{
    return (h1 >= h2 && w1 >= w2)
        || (h1 >= w2 && w1 >= h2);
}

int solve(int i, int height_idx, int width_idx, int D[3][100000], int N)
{
    if(i == N)
        return 0;

    if(height_idx != -1 && dp[height_idx][width_idx][i])
        return dp[height_idx][width_idx][i];

    int ans = INT_MIN;

    if(height_idx == -1 || fit(D[height_idx][i-1], D[width_idx][i-1], D[A][i], D[B][i]))
        ans = max(ans, D[C][i] + solve(i + 1, A, B, D, N));
    if(height_idx == -1 || fit(D[height_idx][i-1], D[width_idx][i-1], D[A][i], D[C][i]))
        ans = max(ans, D[B][i] + solve(i + 1, A, C, D, N));
    if(height_idx == -1 || fit(D[height_idx][i-1], D[width_idx][i-1], D[B][i], D[C][i]))
        ans = max(ans, D[A][i] + solve(i + 1, B, C, D, N));

    if(height_idx != -1)
        dp[height_idx][width_idx][i] = ans;

    return ans;
}

int main()
{
    int D[3][100000];
    int N;

    scanf("%d", &N);

    for(int i = 0; i < N; i++)
        scanf("%d%d%d", &D[A][i], &D[B][i], &D[C][i]);

    printf("%d\n", max(-1, solve(0, -1, -1, D, N)));
}
