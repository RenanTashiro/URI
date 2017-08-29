/*
Nome:      Quadrante
ID:        1115
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   430 Bytes
Submissao: 09/01/15 12:46:23
*/
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    while(x != 0 && y != 0){
        if(x > 0 && y > 0)
            cout << "primeiro" << endl;
        if(x < 0 && y > 0)
            cout << "segundo" << endl;
        if(x < 0 && y < 0)
            cout << "terceiro" << endl;
        if(x > 0 && y < 0)
            cout << "quarto" << endl;
    cin >> x >> y;
    }

}
