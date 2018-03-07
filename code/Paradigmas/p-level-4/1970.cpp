/*
Nome:      Primeiro Contato
ID:        1970
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.980s
Tamanho:   1,15 KB
Submissao: 13/08/17 18:54:39
*/
#include <bits/stdc++.h>
using namespace std;

int dp[105][55][55][55];

int solve(int i, int c1, int c2, int c3, int music_len[], int N, bool used_one=false)
{
    if(i == N)
        return used_one ? 0 : INT_MIN;

    if(dp[i][c1][c2][c3])
        return dp[i][c1][c2][c3];

    int ans = INT_MIN;

    if(c1 - music_len[i] >= 0)
        ans = max(ans, music_len[i] + solve(i + 1, c1 - music_len[i], c2, c3, music_len, N, true));
    if(c2 - music_len[i] >= 0)
        ans = max(ans, music_len[i] + solve(i + 1, c1, c2 - music_len[i], c3, music_len, N, true));
    if(c3 - music_len[i] >= 0)
        ans = max(ans, music_len[i] + solve(i + 1, c1, c2, c3 - music_len[i], music_len, N, true));

    ans = max(ans, solve(i + 1, c1, c2, c3, music_len, N, used_one));

    return dp[i][c1][c2][c3] = ans;
}

int main()
{
    int N, K;

    scanf("%d%d", &N, &K);

    int music_len[N], cartridge[3] = {};

    for(int i = 0; i < N; i++)
        scanf("%d", &music_len[i]);

    for(int i = 0; i < K; i++)
        scanf("%d", &cartridge[i]);

    printf("%d\n", max(0, solve(0, cartridge[0], cartridge[1], cartridge[2], music_len, N)));
}
