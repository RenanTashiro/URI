/*
Nome:      Jogo dos Palíndromos
ID:        2588
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   556 Bytes
Submissao: 14/06/17 20:02:58
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;

    while(cin >> word)
    {
        int letters_count[30] = {};

        for(int i = 0; word[i] != '\0'; i++)
        {
            letters_count[word[i] - 'a']++;
        }

        int n_odds = 0;

        for(int i = 0; i < 30; i++)
        {
            if(letters_count[i] % 2)
            {
                n_odds++;
            }
        }

        cout << (n_odds - ((word.size() + n_odds) % 2 == 0 && n_odds > 0 ? 1 : 0)) << endl;
    }
}
