/*
Nome:      Cédulas
ID:        1018
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   788 Bytes
Submissao: 02/01/15 19:12:59
*/
#include <stdio.h>
int main(){
int N, N100, N50, N20, N10, N5, N2, N1;
scanf("%d",&N);
N100 = N / 100;
N50 = (N - N100 * 100) / 50;
N20 = (N - (N100 * 100 + N50 * 50)) / 20;
N10 = (N - (N100 * 100 + N50 * 50 + N20 * 20)) / 10;
N5 = (N - (N100 * 100 + N50 * 50 + N20 * 20 + N10 * 10)) / 5;
N2 = (N - (N100 * 100 + N50 * 50 + N20 * 20 + N10 * 10 + N5 * 5)) / 2;
N1 = (N - (N100 * 100 + N50 * 50 + N20 * 20 + N10 * 10 + N5 * 5 + N2 * 2)) / 1;
    printf("%d\n",N);
    printf("%d nota(s) de R$ 100,00\n",N100);
    printf("%d nota(s) de R$ 50,00\n",N50);
    printf("%d nota(s) de R$ 20,00\n",N20);
    printf("%d nota(s) de R$ 10,00\n",N10);
    printf("%d nota(s) de R$ 5,00\n",N5);
    printf("%d nota(s) de R$ 2,00\n",N2);
    printf("%d nota(s) de R$ 1,00\n",N1);
}
