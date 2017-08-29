/*
Nome:      Teste de Seleção 1
ID:        1035
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   243 Bytes
Submissao: 04/01/15 20:31:43
*/
#include <stdio.h>
int main(){
int A, B, C, D;
scanf("%d%d%d%d",&A,&B,&C,&D);
if(B>C && D>A && C+D>A+B && C>0 && D>0 && A%2==0)
{
    printf("Valores aceitos\n");
}
     else
    {
        printf("Valores nao aceitos\n");
    }
}
