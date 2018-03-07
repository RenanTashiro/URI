/*
Nome:      Polícia e Ladrão
ID:        1905
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1,14 KB
Submissao: 24/08/15 19:31:22
*/
#include <stdio.h>

#define MAXL 5
#define OK 1
#define LIMIT 0

void is_possible_escape( int matrix[MAXL][MAXL], int visited[MAXL][MAXL], int i, int j )
{
    if( matrix[i][j] == 1 )
        return;

    visited[i][j] = OK;

    if( i + 1 < MAXL && !visited[i+1][j] )
        is_possible_escape( matrix, visited, i + 1, j );
    if( i - 1 >= LIMIT && !visited[i-1][j] )
        is_possible_escape( matrix, visited, i - 1, j );
    if( j + 1 < MAXL && !visited[i][j+1] )
        is_possible_escape( matrix, visited, i, j + 1 );
    if( j - 1 >= LIMIT && !visited[i][j-1] )
        is_possible_escape( matrix, visited, i, j - 1 );
}

int main()
{
    int T;

    scanf( "%d", &T );

    while( T-- )
    {
        int labirinto[MAXL][MAXL];
        int visited[MAXL][MAXL] = {{0}};
        unsigned i, j;

        for( i = 0; i < MAXL; i++ )
            for( j = 0; j < MAXL; j++ )
                scanf( "%d", &labirinto[i][j] );

        is_possible_escape( labirinto, visited, 0, 0 );

        if( visited[4][4] == 1 )
            puts( "COPS" );
        else
            puts( "ROBBERS" );
    }

    return 0;
}
