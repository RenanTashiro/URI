/*
Nome:      Ordenando a Lista de Crianças do Papai Noel
ID:        2479
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   618 Bytes
Submissao: 25/04/17 19:27:26
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, good = 0;

    cin >> N;

    vector<string> santa_list;

    for(int i = 0; i < N; i++)
    {
        string name;
        char ok;

        cin >> ok >> name;

        santa_list.push_back(name);

        if(ok == '+')
        {
            good++;
        }
    }

    sort(santa_list.begin(), santa_list.end());

    for(int i = 0; i < (int)santa_list.size(); i++)
    {
        cout << santa_list[i] << endl;
    }

    cout << "Se comportaram: " << good << " | Nao se comportaram: " << N - good << endl;
}
