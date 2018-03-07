/*
Nome:      Número de Envelopes
ID:        2341
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.324s
Tamanho:   353 Bytes
Submissao: 10/06/17 22:52:38
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;

    cin >> N >> K;

    vector<int> n_label(K, 0);

    for(int i = 0; i < N; i++)
    {
        int x;

        cin >> x;

        n_label[x-1]++;
    }

    int ans = INT_MAX;

    for(auto n : n_label) ans = min(ans, n);

    cout << ans << endl;
}
