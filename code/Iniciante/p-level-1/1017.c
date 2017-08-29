/*
Nome:      Gasto de Combustível
ID:        1017
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   169 Bytes
Submissao: 02/01/15 10:48:39
*/
#include <stdio.h>
int main(){
float time, velocity, liters;
scanf("%f",&time);
scanf("%f",&velocity);
liters = time * velocity / 12;
printf("%.3f\n",liters);
}
