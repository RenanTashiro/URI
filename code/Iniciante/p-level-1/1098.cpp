/*
Nome:      Sequencia IJ 4
ID:        1098
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   475 Bytes
Submissao: 08/01/15 14:10:26
*/
#include <iostream>
using namespace std;

int main ()
{
    double i = 0, j = 1, aux;

    cout << "I=" << i << " J=" << j << endl;

    while(i < 1.9){

            cout << "I=" << i << " J=" << j + 1 << endl;
            cout << "I=" << i << " J=" << j + 2 << endl;
            cout << "I=" << (i+=0.2) << " J=" << (j+=0.2) << endl;
    }

            cout << "I=" << 2 << " J=" << 4 << endl;
            cout << "I=" << 2 << " J=" << 5 << endl;
}



