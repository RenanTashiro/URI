/*
Nome:      Fórmula de Bhaskara
ID:        1036
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   369 Bytes
Submissao: 05/01/15 19:46:32
*/
#include <stdio.h>
#include <math.h>
int main()
{
float a, b, c, delta, r1, r2;

    scanf("%f%f%f",&a,&b,&c);

    delta = (b * b) - 4 * a * c;
    r1 = (-b + sqrt(delta)) / (2 * a);
    r2 = (-b - sqrt(delta)) / (2 * a);

if(delta < 0 || 2 * a == 0)
{
    printf("Impossivel calcular\n");
}
else
{
    printf("R1 = %.5f\nR2 = %.5f\n",r1,r2);
}
}
