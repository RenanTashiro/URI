/*
Nome:      Cálculo Simples
ID:        1010
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   206 Bytes
Submissao: 01/01/15 09:50:54
*/
#include <stdio.h>
int main(){
int A, AN, B, BN;
float AP, BP, TOTAL;
scanf("%d%d%f",&A,&AN,&AP);
scanf("%d%d%f",&B,&BN,&BP);
TOTAL = AN * AP + BN * BP;
printf("VALOR A PAGAR: R$ %.2f\n",TOTAL);
}
