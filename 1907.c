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
    int row[1024], column[1024], fim = 0;
    unsigned i, j;

    scanf( "%d%d", &N, &M );

    for( i = 0; i < N; i++ )
    {
        for( j = 0; j < M; j++ )
        {
            scanf( " %c", &img[i][j] );
            if( img[i][j] == '.' )
            {
                row[fim] = i, column[fim++] = j;
            }
        }
    }

    for( i = 0; i < fim; i++ )
    {
        if( !visited[row[i]][column[i]] )
        {
            findWhite( row[i], column[i], N, M );
            counter++;
        }
    }

    printf( "%d %d\n", counter, fim );

    return 0;
}
