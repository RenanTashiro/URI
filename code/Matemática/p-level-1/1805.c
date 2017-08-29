/*
Nome:      Soma Natural
ID:        1805
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   186 Bytes
Submissao: 08/06/15 19:58:29
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    unsigned long long int a,b,soma;
    scanf("%llu %llu", &a,&b);
    soma = ((a+b)*(b-a+1))/2;
   printf("%llu\n",soma);
 }
