/*
Nome:      Números Ímpares
ID:        1067
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   169 Bytes
Submissao: 07/01/15 13:44:32
*/
#include <iostream>
using namespace std;

int main()
{
    int x, aux;
    cin >> x;

    for(aux = 1; aux <= x; aux += 2){
        cout << aux << endl;
}
}
