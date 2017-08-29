/*
Nome:      O Maior
ID:        1013
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   206 Bytes
Submissao: 03/01/15 08:31:57
*/
#include <stdio.h>
int main(){
int A, B, C, M1, M2;
scanf("%d",&A);
scanf("%d",&B);
scanf("%d",&C);
M1 = (A + B + abs(A - B)) / 2;
M2 = (M1 + C + abs(M1 - C)) / 2;
printf("%d eh o maior\n",M2);
}
