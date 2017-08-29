/*
Nome:      Fechadura
ID:        2449
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   626 Bytes
Submissao: 15/06/17 14:19:08
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;

    int h[N];

    for(int i = 0; i < N; i++)
    {
        cin >> h[i];
    }

    int i = 0, j = N - 1, ans = 0;

    while(i < j)
    {
        if(h[i] != M)
        {
            ans += abs(h[i] - M);
            h[i+1] += M - h[i];
            h[i] = M;
        }

        if(h[j] != M)
        {
            ans += abs(h[j] - M);
            h[j-1] += M - h[j];
            h[j] = M;
        }

        i++, j--;
    }

    if(N == 1) ans = abs(h[0] - M);

    cout << ans << endl;
}
