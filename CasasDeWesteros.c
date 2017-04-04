#include <stdio.h>
#define DIM 1200

int main()
{
    int N;
    char matrix[DIM][DIM];
    unsigned i, j;

    scanf( "%d ", &N );

    for( i = 0; i < N; i++ ){
        for( j = 0; j < N; j++ ){
            scanf( "%c", &matrix[i][j] );
        }
    }

    return 0;
}
