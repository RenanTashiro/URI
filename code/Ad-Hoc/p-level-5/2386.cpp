/*
Nome:      Telescópio
ID:        2386
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   381 Bytes
Submissao: 25/04/17 20:05:14
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, N, n_seenable = 0;

    cin >> A >> N;

    double more_than = 40000000.0 / A;

    for(int i = 0; i < N; i++)
    {
        int foton;

        scanf("%d", &foton);

        if(foton >= more_than)
        {
            n_seenable++;
        }
    }

    cout << n_seenable << endl;
}
