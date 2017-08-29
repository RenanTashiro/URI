/*
Nome:      Troca em Vetor I
ID:        1175
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   282 Bytes
Submissao: 11/01/15 13:20:46
*/
#include <iostream>
using namespace std;

int main()
{
    int N[20], x, n = 0;

    for(int i = 0; i < 20; i++){

    cin >> N[i];

    }
    x = 19;
    for(int i = 20; i > 0; i--){

    cout << "N[" << n << "] = " << N[x] << endl;
    x--;
    n++;
    }

}
