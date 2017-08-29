/*
Nome:      Esfera
ID:        1011
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   192 Bytes
Submissao: 01/01/15 10:03:56
*/
#include <stdio.h>
#include <math.h>
int main(){
double radius, volume, pi = 3.14159;
scanf("%lf",&radius);
volume = (4.0/3) * pi * pow(radius,3);
printf("VOLUME = %.3lf\n",volume);
}
