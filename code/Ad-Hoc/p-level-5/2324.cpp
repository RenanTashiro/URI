/*
Nome:      Pastas
ID:        2324
Resposta:  Accepted
Linguagem: C++
Tempo:     0.308s
Tamanho:   595 Bytes
Submissao: 23/04/17 09:54:41
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int P, N;

    cin >> P >> N;

    vector<int> qtd(P, 0);

    for(int i = 0; i < N; i++)
    {
        int aba;

        cin >> aba;

        qtd[aba-1]++;
    }

    bool possible = true;
    int cdiff = qtd[0];

    for(int i = 1; i < P; i++)
    {
        if(cdiff - qtd[i] > 1 || qtd[i] > qtd[i-1])
        {
            possible = false;
            break;
        }
    }

    if(possible)
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }
}
