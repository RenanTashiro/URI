/*
Nome:      Trilhas
ID:        2296
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.036s
Tamanho:   691 Bytes
Submissao: 10/06/17 23:36:37
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, easiest_so_far = INT_MAX, easiest_idx = 0;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        int M, prev;

        cin >> M >> prev;

        int lr = 0, rl = 0;

        for(int j = 1; j < M; j++)
        {
            int h;

            cin >> h;

            if(h > prev)
                lr += h - prev;
            else
                rl += prev - h;

            prev = h;
        }

        if(easiest_so_far > min(lr, rl))
        {
            easiest_so_far = min(lr, rl);
            easiest_idx = i;
        }
    }

    cout << easiest_idx + 1 << endl;
}
