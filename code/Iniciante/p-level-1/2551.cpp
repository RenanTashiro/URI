/*
Nome:      Novo Recorde
ID:        2551
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   529 Bytes
Submissao: 09/05/17 17:07:15
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(cin >> N)
    {
        vector<double> vel(N);
        double record = 0.0;

        for(int i = 0; i < N; i++)
        {
            int T, D;

            cin >> T >> D;

            vel[i] = (double) D / T;
        }

        for(int i = 0; i < N; i++)
        {
            if(vel[i] > record)
            {
                cout << i + 1 << endl;
                record = vel[i];
            }
        }
    }
}
