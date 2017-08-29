/*
Nome:      Preenchimento de Vetor I
ID:        1173
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   203 Bytes
Submissao: 11/01/15 12:58:40
*/
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for(int i = 0; i < 10; i++){

        cout << "N[" << i << "] = " << N << endl;
        N *= 2;
    }
}
