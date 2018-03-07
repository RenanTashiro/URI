/*
Nome:      Ilhas Isoladas
ID:        2492
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   937 Bytes
Submissao: 10/09/17 22:02:15
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;

    while(cin >> T && T)
    {
        map<string,int> in, out;
        string u, v, _;

        for(int i = 0; i < T; i++)
        {
            cin >> u >> _ >> v;

            out[u]++;
            in[v]++;
        }

        bool is_fun = true, invertible = true;

        for(auto island : out) {
            if(island.second > 1) {
                is_fun = false;
                break;
            }
        }

        for(auto island : in)  {
            if(island.second > 1) {
                invertible = false;
                break;
            }
        }

        if(is_fun) {
            if(invertible) {
                cout << "Invertible.\n";
            } else {
                cout << "Not invertible.\n";
            }
        } else {
            cout << "Not a function.\n";
        }
    }
}
