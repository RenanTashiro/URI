/*
Nome:      Triângulo
ID:        1043
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   574 Bytes
Submissao: 06/01/15 20:07:17
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main()
{
    float A, B, C, perim, area;
    cin >> A >> B >> C;
 
        perim = A + B + C;
        area = (A + B) * C / 2;
 
    if(A > 0 && B > 0 && C > 0 && fabs(A + B) > C && fabs(A + C) > B && fabs(B + C) > A && fabs(B - C) < A && fabs(A - C) < B && fabs(A - B) < C)
        cout <<  setiosflags (ios::fixed) << setprecision (1) << "Perimetro = " << perim << endl;
    else
        cout <<  setiosflags (ios::fixed) << setprecision (1) << "Area = " << area << endl;
}