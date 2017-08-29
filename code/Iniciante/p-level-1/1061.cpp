/*
Nome:      Tempo de um Evento
ID:        1061
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   1,17 KB
Submissao: 16/01/15 15:25:40
*/
#include <iostream>
using namespace std;

int main()
{
    string d, d1;                    //declaracao de variaveis w = dia  y = minuto
    char t1, t2, t3, t4;             //                        x = hora z = segundo
    int w, w1, x, x1, y, y1, z, z1, dia,
        hora, minutos, segundos, aux, aux1;

    cin >> d >> w >> x >> t1 >> y >>  // entrada de dados
        t2 >> z >> d1 >> w1 >> x1 >>
        t3 >> y1 >> t4 >> z1;

    if(x > 0 && x > x1)               //estabelecimento de condic?es
    dia = w1 - w - 1;
    else
    dia = w1 - w;

    if(w < w1 && y > y1)
    hora = 24 - x + x1 - 1;
    else if(w < w1)
    hora = 24 - x + x1;
    else
    hora = x1 - x;

    if(y <= y1)
    minutos = y1 - y;
    else if(y >= y1 && z > z1)
    minutos = 60 - y + y1 - 1;
    else
    minutos = 60 - y + y1;

    if(z <= z1)
    segundos = z1 - z;
    else
    segundos = 60 - z + z1;

    cout << dia << " dia(s)" << endl;     //saida de dados
    if(hora < 24)
    cout << hora << " hora(s)" << endl;
    else
    cout << hora - 24 << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;
}