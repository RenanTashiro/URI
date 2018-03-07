/*
Nome:      Chirrin Chirrion
ID:        2583
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   550 Bytes
Submissao: 16/09/17 08:28:13
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int C;

    cin >> C;

    while(C--)
    {
        set<string> has;
        int N;

        cin >> N;

        while(N--)
        {
            string item, word;

            cin >> item >> word;

            if(word == "chirrin")
                has.insert(item);
            else if(word == "chirrion")
                has.erase(item);
        }

        cout << "TOTAL\n";

        for(string item : has)
            cout << item << endl;
    }
}
