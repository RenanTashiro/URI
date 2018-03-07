/*
Nome:      Abracadabra
ID:        2484
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.068s
Tamanho:   533 Bytes
Submissao: 19/04/17 20:09:46
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;

    while(cin >> word)
    {
        int counter = 0;

        for(unsigned i = word.size(); i > 0; i--)
        {
            for(int k = 0; k < counter; k++)
                cout << ' ';

            cout << word[0];

            for(unsigned j = 1; j < i; j++)
            {
                cout << ' ' << word[j];
            }

            cout << endl;

            counter++;
        }

        cout << endl;
    }
}
