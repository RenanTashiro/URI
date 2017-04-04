#include <stdio.h>

int main()
{
    int n, t, k, m;

    while( scanf( "%d%d%d%d", &n, &t, &k, &m ) && n != 0 ){

        double matrixA[n][n], matrixB[n][n], matrixC[n][n];
        unsigned i, j, l, k;

        for( i = 0; i < n; i++ ){
            for( j = 0; j < n; j++ ){
                scanf( "%lf", &matrixA[i][j] );
                matrixB[i][j] = matrixA[i][j];
            }
        }

        for( k = 0; k < m; k++ ){
            for( i = 0; i < n; i++ ){
                for( j = 0; j < n; j++ ){
                        matrixC[i][j] = 0;
                    for( l = 0; l < n; l++ ){
                        matrixC[i][j] += matrixA[j][l];
                    }
                }
            }
        }

    }

    return 0;
}
