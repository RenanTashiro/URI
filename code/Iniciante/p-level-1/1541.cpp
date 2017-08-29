/*
Nome:      Construindo Casas
ID:        1541
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   438 Bytes
Submissao: 13/01/15 15:45:15
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int A, B, lado;
    float C, area, area_util;

    while(A != 0 || B != 0 || C != 0){

    cin >> A;
    if(A == 0)
        break;
    cin >> B;
    if(B == 0)
        break;
    cin >> C;
    if(C == 0)
        break;
    area = A * B;
    area_util = area / (C / 100);
    lado = sqrt(area_util);

    cout << lado << endl;
    }
}
