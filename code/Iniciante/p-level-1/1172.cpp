/*
Nome:      Substituição em Vetor I
ID:        1172
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   312 Bytes
Submissao: 11/01/15 11:21:09
*/
#include <iostream>
using namespace std;

int main()
{
    int X[10];

    for(int i = 0; i < 10; i++){

        cin >> X[i];

        if(X[i] == 0 || X[i] < 0)
            cout << "X[" << i << "] = " << 1 << endl;
        else
            cout << "X[" << i << "] = " << X[i] << endl;
    }

}
