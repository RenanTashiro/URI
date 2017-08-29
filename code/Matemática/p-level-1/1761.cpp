/*
Nome:      Decoração Natalina
ID:        1761
Resposta:  Accepted
Linguagem: C++
Tempo:     0.032s
Tamanho:   431 Bytes
Submissao: 22/02/15 10:57:02
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define PI 3.141592654

int main()
{
    double angulo, distancia, altura_elfo, altura_arvore;

    while(cin >> angulo >> distancia >> altura_elfo){

        altura_arvore = (tan(angulo * PI / 180.0) * distancia) + altura_elfo;

        cout << setiosflags(ios::fixed) << setprecision(2) << double(altura_arvore * 5) << endl;
    }
}
