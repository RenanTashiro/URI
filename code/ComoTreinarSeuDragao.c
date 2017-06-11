#include <stdio.h>
#include <stdlib.h>

#define MAXINPUT 100000

typedef struct
{
    int dias, custo;
}Treino;

int main()
{
    Treino dragao[MAXINPUT];
    int dia, custo, idx = 0;

    while( scanf( "%d%d", &dia, &custo ) != EOF ){
        dragao[idx].dias = dia;
        dragao[idx++].custo = custo;
    }



    return 0;
}
