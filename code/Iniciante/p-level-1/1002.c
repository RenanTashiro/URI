/*
Nome:      Área do Círculo
ID:        1002
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   148 Bytes
Submissao: 22/05/15 16:42:03
*/
#include <stdio.h>

int main(int argc,char *argv[]) {
double A,r;


scanf("%lf",&r);
A=3.14159*(r*r);
printf("A=%.4lf\n",A);

return 0;
}