/*
Nome:      Etiquetas de Noel
ID:        2482
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   504 Bytes
Submissao: 28/04/17 14:54:40
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;

    cin >> N;

    map<string, string> table;
    string lan, greeting, name;

    while(N--)
    {
        cin >> lan;
        getchar();
        getline(cin, greeting);

        table[lan] = greeting;
    }

    cin >> M;

    while(M--)
    {
        getchar();
        getline(cin, name);
        cin >> lan;

        cout << name << endl;
        cout << table[lan] << endl << endl;
    }
}
