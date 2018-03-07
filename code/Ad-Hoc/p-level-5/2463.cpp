/*
Nome:      Corredor
ID:        2463
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   388 Bytes
Submissao: 28/04/17 17:08:36
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, value, max_pts = 0, act_pts = 0;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &value);

        act_pts += value;

        if(act_pts < 0)
        {
            act_pts = 0;
        }

        max_pts = max(max_pts, act_pts);
    }

    cout << max_pts << endl;
}
