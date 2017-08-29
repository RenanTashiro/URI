/*
Nome:      A Mensagem de Will
ID:        2523
Resposta:  Accepted
Linguagem: C++
Tempo:     0.008s
Tamanho:   364 Bytes
Submissao: 19/04/17 18:20:45
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string alpha;
    int N;

    while(cin >> alpha)
    {
        cin >> N;

        string msg = "";
        int index;

        for(int i = 0; i < N; i++)
        {
            cin >> index;

            msg += alpha[index-1];
        }

        cout << msg << endl;
    }
}
