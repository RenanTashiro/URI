/*
Nome:      Lanche
ID:        1038
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   448 Bytes
Submissao: 05/01/15 19:34:09
*/
#include <stdio.h>
int main()
{
int X, Y;
float total;
scanf("%d",&X);
scanf("%d",&Y);
if(X == 1)
{
total = 4 * Y;
printf("Total: R$ %.2f\n",total);
}
if(X == 2)
{
total = 4.50 * Y;
printf("Total: R$ %.2f\n",total);
}
if(X == 3)
{
total = 5 * Y;
printf("Total: R$ %.2f\n",total);
}
if(X == 4)
{
total = 2 * Y;
printf("Total: R$ %.2f\n",total);
}
if(X == 5)
{
total = 1.50 * Y;
printf("Total: R$ %.2f\n",total);
}
}
