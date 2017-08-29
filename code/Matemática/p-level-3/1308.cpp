/*
Nome:      Guerreiros Etruscos Nunca Jogam Xadrez
ID:        1308
Resposta:  Accepted
Linguagem: C++
Tempo:     0.048s
Tamanho:   346 Bytes
Submissao: 12/05/15 09:29:21
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long int N, warriors, row;

    cin >> N;

        for( unsigned int i = 0; i < N; i++){

            cin >> warriors;

            row = (sqrt(1 + 8 * warriors) - 1) / 2;

            cout << row << endl;

        }

    return 0;
}
