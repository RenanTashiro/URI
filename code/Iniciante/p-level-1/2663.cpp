/*
Nome:      Fase
ID:        2663
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   438 Bytes
Submissao: 13/09/17 17:33:56
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;

    cin >> N >> K;

    vector<int> score(N), acc(1005, 0);

    for(int i = 0; i < N; i++)
        cin >> score[i], acc[score[i]]++;

    sort(score.rbegin(), score.rend());

    int value = score[K-1], qtd = 0;

    for(int i = 0; i < K; i++)
        if(score[i] == value)
            qtd++;

    cout << K + acc[value] - qtd << endl;
}
