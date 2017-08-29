/*
Nome:      Notas e Moedas
ID:        1021
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   1,08 KB
Submissao: 04/01/15 20:24:49
*/
#include <stdio.h>
int main(){
double N;
int N100, N50, N20, N10, N5, N2, C100, C50, C25, C10, C5, C1, NN;
scanf("%lf",&N);
NN = N * 100;
N100 = NN / 10000;
NN = NN % 10000;
N50 = NN / 5000;
NN = NN % 5000;
N20 = NN / 2000;
NN = NN % 2000;
N10 = NN / 1000;
NN = NN % 1000;
N5 = NN / 500;
NN = NN % 500;
N2 = NN / 200;
NN = NN % 200;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",N100);
    printf("%d nota(s) de R$ 50.00\n",N50);
    printf("%d nota(s) de R$ 20.00\n",N20);
    printf("%d nota(s) de R$ 10.00\n",N10);
    printf("%d nota(s) de R$ 5.00\n",N5);
    printf("%d nota(s) de R$ 2.00\n",N2);
C100 = NN / 100;
NN = NN % 100;
C50 = NN / 50;
NN = NN % 50;
C25 = NN / 25;
NN = NN % 25;
C10 = NN / 10;
NN = NN % 10;
C5 = NN / 5;
NN = NN % 5;
C1 = NN;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",C100);
    printf("%d moeda(s) de R$ 0.50\n",C50);
    printf("%d moeda(s) de R$ 0.25\n",C25);
    printf("%d moeda(s) de R$ 0.10\n",C10);
    printf("%d moeda(s) de R$ 0.05\n",C5);
    printf("%d moeda(s) de R$ 0.01\n",C1);
}
