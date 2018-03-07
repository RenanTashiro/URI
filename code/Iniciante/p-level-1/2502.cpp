/*
Nome:      Decifrando a Carta Criptografada
ID:        2502
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   2,05 KB
Submissao: 19/04/17 18:03:27
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int C, N;

    while(cin >> C >> N)
    {
        map<char, char> table;
        string c1, c2;

        getchar();
        getline(cin, c1);
        getline(cin, c2);

        for(int i = 0; i < C; i++)
        {
            if(isalpha(c1[i]))
            {
                table[c1[i]] = c2[i];

                if(isalpha(c2[i]))
                {
                    table[tolower(c1[i])] = tolower(c2[i]);
                }
                else
                {
                    table[tolower(c1[i])] = c2[i];
                }
            }
            else
            {
                if(isalpha(c2[i]))
                {
                    table[c1[i]] =  tolower(c2[i]);
                }
                else
                {
                    table[c1[i]] =  c2[i];
                }
            }
            if(isalpha(c2[i]))
            {
                table[c2[i]] = c1[i];

                if(isalpha(c1[i]))
                {
                    table[tolower(c2[i])] = tolower(c1[i]);
                }
                else
                {
                    table[tolower(c2[i])] = c1[i];
                }
            }
            else
            {
                if(isalpha(c1[i]))
                {
                    table[c2[i]] =  tolower(c1[i]);
                }
                else
                {
                    table[c2[i]] =  c1[i];
                }
            }
        }

        for(int i = 0; i < N; i++)
        {
            string sentence;

            getline(cin, sentence);

            for(unsigned i = 0; i < sentence.size(); i++)
            {
                if(table.find(sentence[i]) != table.end())
                {
                    cout << table[sentence[i]];
                }
                else
                {
                    cout << sentence[i];
                }
            }

            cout << endl;
        }

        cout << endl;
    }
}
