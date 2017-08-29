/*
Nome:      Resto da Divisão
ID:        1133
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   291 Bytes
Submissao: 09/01/15 14:35:25
*/
#include <iostream>
using namespace std;

int main()
{
    int x, y, aux;
    cin >> x >> y;

    if (x > y){
        aux = x;
        x = y;
        y = aux;
    }
    while(x < y - 1){
    x++;
        if(x % 5 == 2 || x % 5 == 3)
            cout << x << endl;
    }
}
