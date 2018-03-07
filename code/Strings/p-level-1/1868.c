/*
Nome:      Espiral Quadrada
ID:        1868
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.020s
Tamanho:   1,31 KB
Submissao: 12/08/15 19:54:40
*/
#include <stdio.h>
#include <stdlib.h>

#define ESTADO_PARA_DIREITA 0
#define ESTADO_PARA_CIMA 1
#define ESTADO_PARA_ESQUERDA 2
#define ESTADO_PARA_BAIXO 3
#define MOD 4

void incremento( const int estado, int* i, int *j )
{
    switch( estado )
    {
        case ESTADO_PARA_BAIXO: *i += 1; break;
        case ESTADO_PARA_DIREITA: *j += 1; break;
        case ESTADO_PARA_CIMA: *i -= 1; break;
        case ESTADO_PARA_ESQUERDA: *j -= 1; break;
    }
}

int main()
{
    int N;

    while( scanf( "%d", &N ) && N != 0 )
    {
        int i = N / 2, j = N / 2;
        int idx = 1, counter = 0, estado = ESTADO_PARA_DIREITA;
        unsigned l, k;

        while( i != N - 1 || j != N )
        {
            for( l = 0; l < N; l++ )
            {
                for( k = 0; k < N; k++ )
                {
                    printf( "%c", ( l == i && k == j ? 'X' : 'O' ) );
                }
                puts( "" );
            }
            puts( "@" );

            incremento( estado, &i, &j );
            counter++;

            if( counter == idx )
            {
                estado++;
                estado %= MOD;
                counter = 0;
                if( estado == 0 || estado == 2 )
                    idx++;
            }
        }
    }

    return 0;
}