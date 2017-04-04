#include <stdio.h>
#include <stdlib.h>

struct foto{
    int a, b;
};

typedef struct foto Foto;

int compare( const void *a, const void *b )
{
    Foto cmpA = *( Foto* )a;
    Foto cmpB = *( Foto* )b;
    if( cmpA.a - cmpB.a )return ( cmpA.a - cmpB.a );
    if( cmpA.a == cmpB.a )return( cmpA.b < cmpB.b );
    return -1;
}

int main()
{
    int N;

    while( scanf( "%d", &N ) != EOF ){

        Foto foco[N];
        unsigned i, j;

        for( i = 0; i < N; i++ ){
            scanf( "%d%d", &foco[i].a, &foco[i].b );
        }

        qsort( foco, N, sizeof( Foto ), compare );

        int nFotos = 1, interB, index = 1;

        interB = foco[0].b;

        for( i = 1; i < N; i++ ){
            //printf( "%d %d\n", foco[i].a, interB );
            if( foco[i].a > interB ){
                nFotos++;
                index = i + 1;
                interB = foco[i].b;
            }
            else{
                for( j = index; j < i; j++ ){
                    if( foco[i].a > foco[j].b && foco[i].b < foco[i+1].a ){
                        nFotos++;
                        break;
                    }
                }
            }

        }

        printf( "%d\n", nFotos );
    }

    return 0;
}
