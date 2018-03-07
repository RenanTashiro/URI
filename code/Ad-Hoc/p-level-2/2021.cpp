/*
Nome:      Luzes de Natal
ID:        2021
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   434 Bytes
Submissao: 24/02/16 20:50:20
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int M, N, P;

    while(cin >> M >> N >> P && N != 0)
    {
        int Q, tot_lights = 0;

        for(int i = 0; i < P; i++) {
            cin >> Q;
            Q %= N;
            if(Q == 0) Q = N;
            tot_lights += (N + 1) - Q;
        }

        cout << "Lights: " << tot_lights << "\n";
    }

}
