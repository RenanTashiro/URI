/*
Nome:      Intervalo
ID:        1037
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   348 Bytes
Submissao: 05/01/15 17:20:50
*/
#include <stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
if(a<0 || 100<a)
    printf("Fora de intervalo\n");
if(0<=a && a<=25)
    printf("Intervalo [0,25]\n");
if(25<a && a<=50)
    printf("Intervalo (25,50]\n");
if(50<a && a<=75)
    printf("Intervalo (50.75]\n");
if(75<a && a<=100)
    printf("Intervalo (75,100]\n");
}
