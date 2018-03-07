/*
Nome:      Jogo de Cartas
ID:        2307
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.056s
Tamanho:   615 Bytes
Submissao: 15/06/17 10:46:56
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    cin >> N;

    pair<int,int> cards[N];
    bool sorted = true;

    for(int i = 0; i < N; i++)
    {
        cin >> cards[i].first;

        cards[i].second = i;

        if(cards[i].first != i + 1)
        {
            sorted = false;
        }
    }

    if(!sorted)
    {
        sort(cards, cards + N);
    }

    int ans = 1;

    for(int i = 1; i < N; i++)
    {
        if(cards[i].second < cards[i-1].second)
        {
            ans++;
        }
    }

    cout << ans << ' ' << endl;
}
