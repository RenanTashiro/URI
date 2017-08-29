/*
Nome:      Preenchimento de Vetor II
ID:        1177
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   241 Bytes
Submissao: 12/01/15 08:54:45
*/
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int N = 0;

    for(int i = 0; i < 1000; i++){

    cout << "N[" << i << "] = " <<  N << endl;
    N++;
    if(N == T)
    N = 0;
    }

}
