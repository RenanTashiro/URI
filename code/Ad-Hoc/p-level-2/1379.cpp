/*
Nome:      Problema com Mediana e Média
ID:        1379
Resposta:  Accepted
Linguagem: C++
Tempo:     0.136s
Tamanho:   203 Bytes
Submissao: 11/03/15 08:46:58
*/
#include <iostream>
using namespace std;

int main()
{
    int long long A, B, C;

    while(cin >> A >> B && A != 0 && B != 0){

        C = 2 * A - B;

        cout << C << endl;
    }
}
