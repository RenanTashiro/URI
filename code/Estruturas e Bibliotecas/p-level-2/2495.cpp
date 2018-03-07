/*
Nome:      Onde Está Minha Caneta?
ID:        2495
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.144s
Tamanho:   482 Bytes
Submissao: 28/04/17 15:21:35
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(scanf("%d", &N) != EOF)
    {
        vector<int> check(N, 0);
        int id;

        for(int i = 1; i < N; i++)
        {
            scanf("%d", &id);
            check[id-1] = 1;
        }

        for(int i = 0; i < N; i++)
        {
            if(!check[i])
            {
                cout << i+1 << endl;
                break;
            }
        }
    }
}
