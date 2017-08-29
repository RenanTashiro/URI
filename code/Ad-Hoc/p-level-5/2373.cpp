/*
Nome:      Garçom
ID:        2373
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   293 Bytes
Submissao: 25/04/17 20:11:13
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, ans = 0;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        int L, C;

        cin >> L >> C;

        if(L > C)
        {
            ans += C;
        }
    }

    cout << ans << endl;
}
