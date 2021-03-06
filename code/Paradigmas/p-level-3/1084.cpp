/*
Nome:      Apagando e Ganhando
ID:        1084
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.016s
Tamanho:   737 Bytes
Submissao: 08/12/15 16:54:12
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int N, D;

    while(cin >> N >> D && N != 0)
    {
        string number, new_number = "";

        cin >> number;

        for(int j = 0; j < N; j++) {
            if(D > 0 && number[j] < number[j+1]) {
                D--;
                while(D > 0 && !new_number.empty() && new_number.back() < number[j+1]) {
                    new_number.pop_back();
                    D--;
                }
            } else {
                new_number += number[j];
            }
        }

        while(D-- > 0) {
            new_number.pop_back();
        }

        cout << new_number << "\n";
    }
}
