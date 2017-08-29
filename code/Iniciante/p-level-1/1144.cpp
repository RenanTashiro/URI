/*
Nome:      Sequência Lógica
ID:        1144
Resposta:  Accepted
Linguagem: C++
Tempo:     0.004s
Tamanho:   297 Bytes
Submissao: 09/01/15 19:21:25
*/
#include <iostream>
using namespace std;

int main()
{
    int i, n = 0, x = 1;
    cin >> i;

    while(n < i){
        cout << x << " " << x * x << " " << x * x * x << endl;
        cout << x << " " <<  x * x +1 << " " <<  x * x * x + 1 << endl;
        x++;
        n++;
    }
}
