/*
Nome:      Coordenadas de um Ponto
ID:        1041
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   431 Bytes
Submissao: 05/01/15 20:52:49
*/
#include <stdio.h>
int main ()
{
    float x, y;
    scanf("%f%f",&x,&y);

if(x == 0 && y == 0)
{
    printf("Origem\n");
}
if(x == 0 && y != 0)
{
    printf("Eixo Y\n");
}
if(y == 0 && x != 0)
{
    printf("Eixo X\n");
}
if(x > 0 && y > 0)
{
    printf("Q1\n");
}
if(x < 0 && y > 0)
{
    printf("Q2\n");
}
if(x < 0 && y < 0)
{
    printf("Q3\n");
}
if(x > 0 && y < 0)
{
    printf("Q4\n");
}
}
