/*
Nome:      Ginástica
ID:        2664
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.152s
Tamanho:   614 Bytes
Submissao: 13/09/17 17:38:04
*/
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int dp[55][100005];

int solve(int T, int D, int M, int N)
{
    if(T == 0)
        return 1;
    if(dp[T][D])
        return dp[T][D];

    int ans = 0;

    if(D + 1 <= N)
        ans += solve(T-1, D+1, M, N), ans %= MOD;
    if(D - 1 >= M)
        ans += solve(T-1, D-1, M, N), ans %= MOD;

    return dp[T][D] = ans;
}

int main()
{
    int T, M, N;

    cin >> T >> M >> N;

    int ans = 0;

    for(int i = M; i <= N; i++)
        ans += solve(T-1, i, M, N), ans %= MOD;

    cout << ans << endl;
}
