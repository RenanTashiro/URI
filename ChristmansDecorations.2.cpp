#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define PI 3.141592654

int main()
{
    double angulo, distancia, altura_elfo, lights;

    while(cin >> angulo >> distancia >> altura_elfo){

        lights = ((tan(angulo * PI / 180.0) * distancia) + altura_elfo) * 5;

        cout << setiosflags(ios::fixed) << setprecision(2) << lights << endl;
    }
}
