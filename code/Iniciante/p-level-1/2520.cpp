/*
Nome:      O Último Analógimôn
ID:        2520
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.008s
Tamanho:   633 Bytes
Submissao: 19/04/17 18:34:25
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;

    while(cin >> N >> M)
    {
        int x1, y1, x2, y2, tmp;

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                cin >> tmp;

                if(tmp == 1)
                {
                    x1 = i;
                    y1 = j;
                }
                else if(tmp == 2)
                {
                    x2 = i;
                    y2 = j;
                }
            }
        }

        cout << abs(x1 - x2) + abs(y1 - y2) << endl;
    }
}
