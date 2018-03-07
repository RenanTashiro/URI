/*
Nome:      Impeachment do Líder
ID:        2540
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.240s
Tamanho:   448 Bytes
Submissao: 09/05/17 17:01:19
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

            scanf("%d", &vote);

            c += vote;
        }

        if(c >= N * (2.0/3.0))
        {
            puts("impeachment");
        }
        else
        {
            puts("acusacao arquivada");
        }
    }
}
