/*
Nome:      Salário com Bônus
ID:        1009
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   232 Bytes
Submissao: 04/06/15 21:48:26
*/
#include <stdio.h>

int main(){
double sal, vendas, TOTAL;
char nome[10];

scanf ("%s ", nome );
scanf ("%lf", &sal);
scanf ("%lf", &vendas);

TOTAL = sal+(vendas*0.15);
printf ("TOTAL = R$ %.2lf\n", TOTAL);
return 0;
}