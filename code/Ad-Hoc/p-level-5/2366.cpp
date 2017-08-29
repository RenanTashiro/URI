/*
Nome:      Maratona
ID:        2366
Resposta:  Accepted
Linguagem: C++
Tempo:     0.008s
Tamanho:   433 Bytes
Submissao: 10/06/17 22:59:42
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;

    int prev = 0;
    bool possible = true;

    for(int i = 0; i < N; i++)
    {
        int p;

        cin >> p;

        if(p - prev > M)
        {
            possible = false;
        }

        prev = p;
    }

    if(42195 - prev > M) possible = false;

    cout << (possible ? "S" : "N") << endl;
}
