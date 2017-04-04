#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int ini, fim;
}Intervalo;

int compare( const void *a, const void *b )
{
    Intervalo cmpA = *( Intervalo* )a;
    Intervalo cmpB = *( Intervalo* )b;
    return( cmpA.ini - cmpB.ini );
}
int main()
{
    int P, S, teste = 1;

    while( scanf( "%d%d", &P, &S ) && P != 0 ){

        Intervalo sorveteiro[S];
        unsigned i;

        for( i = 0; i < S; i++ ){
            scanf( "%d%d", &sorveteiro[i].ini, &sorveteiro[i].fim );
        }

        qsort( sorveteiro, S, sizeof( Intervalo ), compare );

        int ini_intervalo = sorveteiro[0].ini, fim_intervalo = sorveteiro[0].fim;

        printf( "Teste %d\n", teste++ );

        for( i = 1; i < S; i ++ ){
            if( sorveteiro[i].ini <= fim_intervalo && sorveteiro[i].fim > fim_intervalo ){
                fim_intervalo = sorveteiro[i].fim;
            }
            else if( sorveteiro[i].ini > fim_intervalo ){
                printf( "%d %d\n", ini_intervalo, fim_intervalo );
                ini_intervalo = sorveteiro[i].ini;
                fim_intervalo = sorveteiro[i].fim;
            }
        }

        printf( "%d %d\n\n", ini_intervalo, fim_intervalo );
    }

    return  0;
}
