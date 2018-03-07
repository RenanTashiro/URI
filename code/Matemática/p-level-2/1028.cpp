/*
Nome:      Figurinhas
ID:        1028
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.020s
Tamanho:   324 Bytes
Submissao: 07/06/16 14:32:45
*/
#include <stdio.h>

int mdc(int a, int b){
    int aux = 0;
    aux = a % b;
    if(aux != 0)
        mdc(b,aux);
    else
        return b;
}
int main()
{
    int N, F1, F2;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d%d", &F1, &F2);
        printf("%d\n", mdc(F1,F2));
    }
}
