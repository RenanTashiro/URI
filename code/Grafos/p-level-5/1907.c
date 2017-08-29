/*
Nome:      Coloração de Cenários de Jogos
ID:        1907
Resposta:  Accepted
Linguagem: C
Tempo:     0.452s
Tamanho:   1,06 KB
Submissao: 07/09/15 08:34:22
*/
#include <stdio.h>

char img[1024][1024];
int visited[1024][1024] = {{0}};

void findWhite( int i, int j, int N, int M )
{

    visited[i][j] = 1;

    if( i - 1 >= 0 && !visited[i-1][j] && img[i-1][j] == '.' )
        findWhite( i - 1, j, N, M );
    if( i + 1 < N && !visited[i+1][j] && img[i+1][j] == '.' )
        findWhite( i + 1, j, N, M );
    if( j - 1 >= 0 && !visited[i][j-1] && img[i][j-1] == '.' )
        findWhite( i, j - 1, N, M );
    if( j + 1 < M && !visited[i][j+1] && img[i][j+1] == '.' )
        findWhite( i, j + 1, N, M );
}

int main()
{
    int N, M, counter = 0;
    unsigned i, j;

    scanf( "%d%d", &N, &M );

    for( i = 0; i < N; i++ )
        for( j = 0; j < M; j++ )
            scanf( " %c", &img[i][j] );

    for( i = 0; i < N; i++ )
    {
        for( j = 0; j < M; j++ )
        {
            if( !visited[i][j] && img[i][j] == '.' )
            {
                findWhite( i, j, N, M );
                counter++;
            }
        }
    }

    printf( "%d\n", counter );

    return 0;
}
