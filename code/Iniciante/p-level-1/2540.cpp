/*
Nome:      Impeachment do Líder
ID:        2540
Resposta:  Accepted
Linguagem: C++
Tempo:     0.536s
Tamanho:   461 Bytes
Submissao: 09/05/17 16:59:50
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(cin >> N)
    {
        int c = 0;

        for(int i = 0; i < N; i++)
        {
            int vote;

            cin >> vote;

            c += vote;
        }

        if(c >= N * (2.0/3.0))
        {
            cout << "impeachment" << endl;
        }
        else
        {
            cout << "acusacao arquivada" << endl;
        }
    }
}
