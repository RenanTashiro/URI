#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int inicio, fim;
}Horario;

int compare( const void *a, const void *b )
{
    Horario cmpA = *( Horario* )a;
    Horario cmpB = *( Horario* )b;
    return( cmpA.fim - cmpB.fim );
}

int main()
{
    int N, counter = 1;

    scanf( "%d", &N );

    Horario dentista[N];
    unsigned i;

    for( i = 0; i < N; i++ )
        scanf( "%d%d", &dentista[i].inicio, &dentista[i].fim );

    qsort( dentista, N, sizeof( Horario), compare );

    int horario_do_fim = dentista[0].fim;

    for( i = 1; i < N; i++ )
        if( horario_do_fim <= dentista[i].inicio ){
            counter++;
            horario_do_fim = dentista[i].fim;
        }

    printf( "%d\n", counter );

    return 0;
}
