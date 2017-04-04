#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.141592654

int main()
{
    double angulo, distancia, altura_elfo, altura_arvore;

    while(cin >> angulo >> distancia >> altura_elfo){

        altura_arvore = (tan(angulo * PI / 180.0) * distancia) + altura_elfo;
        cout << altura_arvore * 5 << endl;
    }
}
