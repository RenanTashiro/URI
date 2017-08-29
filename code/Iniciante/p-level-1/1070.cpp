/*
Nome:      Seis Números Ímpares
ID:        1070
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   333 Bytes
Submissao: 07/01/15 13:41:54
*/
#include <iostream>
using namespace std;

int main()
{
    int x, aux;
    cin >> x;

    if(x % 2 == 0){
        for(int aux = x + 1; aux <= x + 11; aux += 2){
            cout << aux << endl;
        }
    }
    else
        for(int aux = x; aux <= x + 10; aux += 2){
            cout << aux << endl;
        }
}
