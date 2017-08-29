/*
Nome:      Distância Entre Dois Pontos
ID:        1015
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   223 Bytes
Submissao: 02/01/15 10:26:22
*/
#include <stdio.h>
#include <math.h>
int main(){
int x1, y1, x2, y2;
float distancia;
scanf("%d%d",&x1,&y1);
scanf("%d%d",&x2,&y2);
distancia = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
printf("%.4f\n",distancia);
}
