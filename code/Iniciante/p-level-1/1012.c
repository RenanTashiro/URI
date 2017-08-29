/*
Nome:      Área
ID:        1012
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   377 Bytes
Submissao: 23/05/15 08:00:47
*/
#include <stdio.h>
#define pi 3.14159

int main(){
   
   double A, B, C;
   
   scanf("%lf %lf %lf", &A, &B, &C);
   
   printf("TRIANGULO: %.3lf\n", (A*C)/2);
   printf("CIRCULO: %.3lf\n", pi*(C*C));
   printf("TRAPEZIO: %.3lf\n", ((A+B)*C)/2);
   printf("QUADRADO: %.3lf\n", B*B);
   printf("RETANGULO: %.3lf", A*B);
   
   printf("\n");
   
   return 0;
}