/*
Nome:      Corrida
ID:        2396
Resposta:  Accepted
Linguagem: C++
Tempo:     0.004s
Tamanho:   577 Bytes
Submissao: 15/06/17 16:54:14
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;

    vector<pair<int,int>> cars(N);

    for(int i = 0; i < N; i++)
    {
        cars[i] = {0, i};
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            int time;

            cin >> time;

            cars[i].first += time;
        }
    }

    sort(cars.begin(), cars.end());

    cout << cars[0].second + 1 << endl;
    cout << cars[1].second + 1 << endl;
    cout << cars[2].second + 1 << endl;
}
