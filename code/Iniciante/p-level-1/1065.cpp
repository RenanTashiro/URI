/*
Nome:      Pares entre Cinco Números
ID:        1065
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   239 Bytes
Submissao: 07/01/15 08:49:55
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    cout << (a % 2 == 0) + (b % 2 == 0) + (c % 2 == 0) + (d % 2 == 0) + (e % 2 == 0) << " valores pares" << endl;
}
