/*
Nome:      Múltiplos de 13
ID:        1132
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   366 Bytes
Submissao: 09/01/15 14:26:39
*/
#include <iostream>
using namespace std;

int main()
{
    int x, y, troca, aux;
    cin >> x >> y;

    if(x > y){
    troca = x;
    x = y;
    y = troca;
    }

    aux = x;

    if(x == y){
    aux = x;
    }

    else{
    do{
    x++;
    if(x%13!=0){
        aux += x;
    }
    }while(x < y);
    }

    cout << aux << endl;
}
