#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int horas, minutos, segundos, velocidade, horas2,
        minutos2, segundos2;
    char tp1, tp2, tp3, tp4;
    double distancia, total_segundos;

    while(cin >> horas >> tp1 >> minutos >> tp2 >> segundos >> velocidade
         >> horas2 >> tp3 >> minutos2 >> tp4 >> segundos2){

    if(minutos > 0){
    horas = horas - 1;
    minutos = 60 - minutos;
    }
    if(segundos > 0){
    minutos = minutos - 1;
    segundos = 60 - segundos ;
    }

total_segundos = (horas2 - horas) * 3600 + (minutos2 +  minutos) * 60 + (segundos2 + segundos);

distancia = (double) velocidade * (total_segundos / 3600);

cout << setiosflags(ios::fixed) << setprecision(2) << horas2 << tp1 << minutos2 << tp2 << segundos2 << " " << distancia << " km" << endl;


    }
}
