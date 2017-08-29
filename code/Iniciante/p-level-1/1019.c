/*
Nome:      Conversão de Tempo
ID:        1019
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   206 Bytes
Submissao: 02/01/15 18:29:16
*/
#include <stdio.h>
int main(){
int N, hours, minutes, seconds;
scanf("%d",&N);
hours = N / 3600;
minutes = N % 3600 / 60;
seconds = (N % 3600) % 60;
printf("%d:%d:%d\n",hours, minutes, seconds);
}
