/*
Nome:      Consumo
ID:        1014
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   134 Bytes
Submissao: 02/01/15 10:12:29
*/
#include <stdio.h>
int main(){
int X;
float Y, km_l;
scanf("%d",&X);
scanf("%f",&Y);
km_l = X/Y;
printf("%.3f km/l\n",km_l);
}