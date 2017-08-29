/*
Nome:      Coordenadas de um Ponto
ID:        1041
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   519 Bytes
Submissao: 18/02/15 08:54:34
*/
#include <iostream>
using namespace std;

int main()
{
    double x, y;

    cin >> x >> y;

    if(x == 0 && y == 0)
        cout << "Origem" << endl;
    else if(x == 0 && y != 0)
        cout << "Eixo Y" << endl;
    else if(x != 0 && y == 0)
        cout << "Eixo X" << endl;
    else if(x > 0 && y > 0)
        cout << "Q1" << endl;
    else if(x < 0 && y < 0)
        cout << "Q3" << endl;
    else if(x > 0 && y < 0)
        cout << "Q4" << endl;
    else
        cout << "Q2" << endl;
}
