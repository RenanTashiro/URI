/*
Nome:      Saldo de Gols
ID:        2191
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   814 Bytes
Submissao: 16/05/17 17:29:19
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, test = 1;

    while(cin >> N && N)
    {
        int best = 0, act = 0, ini = -1, lst = -1;
        int t_ini = 0;

        for(int i = 0; i < N; i++)
        {
            int X, Y;

            cin >> X >> Y;

            act += X - Y;

            if(act < 0) {
                act = 0;
                t_ini = i + 1;
            }

            if(act >= best) {
                best = act;
                ini = t_ini;
                lst = i;
            }
        }

        cout << "Teste " << test++ << endl;

        if(best != 0)
        {
            cout << ini + 1 << ' ' << lst + 1 << endl << endl;
        }
        else
        {
            cout << "nenhum\n\n";
        }
    }
}
