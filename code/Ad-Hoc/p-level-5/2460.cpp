/*
Nome:      Fila
ID:        2460
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.044s
Tamanho:   653 Bytes
Submissao: 28/04/17 17:04:14
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, giveup[100001] = {0};

    cin >> N;

    int Q[N];

    for(int i = 0; i < N; i++)
    {
        cin >> Q[i];
    }

    int M, id;

    cin >> M;

    while(M--)
    {
        cin >> id;

        giveup[id] = 1;
    }

    bool flag = false;

    for(int i = 0; i < N; i++)
    {
        if(!giveup[Q[i]])
        {
            if(flag)
            {
                cout << " ";
            }
            else
            {
                flag = true;
            }

            cout << Q[i];
        }
    }

    cout << endl;
}
