/*
Nome:      Horas e Minutos
ID:        1300
Resposta:  Accepted
Linguagem: C++
Tempo:     0.084s
Tamanho:   235 Bytes
Submissao: 03/02/15 09:01:11
*/
#include <iostream>
using namespace std;

int main()
{
    int N;

    while(cin >> N){

        if(N % 6 != 0){
            cout << "N" << endl;
            continue;
        }
            cout << "Y" << endl;
    }
}
