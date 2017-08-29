/*
Nome:      Cinema de Xing Tzen Zu
ID:        2100
Resposta:  Accepted
Linguagem: C++
Tempo:     0.008s
Tamanho:   468 Bytes
Submissao: 18/05/17 16:14:49
*/
#include <bits/stdc++.h>
using namespace std;

#define MOD 1300031

int main()
{
    int T;

    cin >> T;

    while(T--)
    {
        int N, M;

        cin >> N >> M;

        long long int ans = 1;

        for(int i = N - M; i > N - M - M; i--)
        {
            ans = (ans * i) % MOD;
        }

        for(int i = 0; i < M; i++)
        {
             ans = (ans * 2) % MOD;
        }

        cout << ans << endl;
    }
}
