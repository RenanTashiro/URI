/*
Nome:      Cola
ID:        2530
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.132s
Tamanho:   558 Bytes
Submissao: 18/05/17 14:59:29
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;

    while(cin >> N >> M)
    {
        int caxias[N], malandro[M];

        for(int i = 0; i < N; i++)
        {
            scanf("%d", &caxias[i]);
        }

        for(int j = 0; j < M; j++)
        {
            scanf("%d", &malandro[j]);
        }

        int index = 0;

        for(int i = 0; i < N; i++)
        {
            if(caxias[i] == malandro[index]) index++;
        }

        cout << (index == M ? "sim" : "nao") << endl;
    }
}
