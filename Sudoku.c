#include <stdio.h>
#define SIZE 9

int main()
{
    int N;
    int matrix[ SIZE ][ SIZE ];
    int rowComp = 0, yes = 0, miniMatrix = 0;
    int columnComp[ SIZE ] = {0};
    unsigned i;

    scanf( "%d", &N );

    for( i = 0; i < N; i++ ){

        size_t j, k, l, n;

        for( j = 0; j < SIZE; j++ ){
            for( k = 0; k < SIZE; k++ ){

                scanf( "%d", &matrix[ j ][ k ] );

                switch( matrix[ j ][ k ] ){

                    case 1: rowComp += 3; columnComp[ k ] += 3; break;
                    case 2: rowComp += 5; columnComp[ k ] += 5; break;
                    case 3: rowComp += 7; columnComp[ k ] += 7; break;
                    case 4: rowComp += 11; columnComp[ k ] += 11; break;
                    case 5: rowComp += 13; columnComp[ k ] += 13; break;
                    case 6: rowComp += 17; columnComp[ k ] += 17; break;
                    case 7: rowComp += 19; columnComp[ k ] += 19; break;
                    case 8: rowComp += 23; columnComp[ k ] += 23; break;
                    case 9: rowComp += 29; columnComp[ k ] += 29; break;
                }
            }
            if( rowComp == 127 ){
                yes++;
            }
            rowComp = 0;
        }

        for( j = 0; j < SIZE; j++ ){

            if( columnComp[ j ] == 127 ){
                yes++;
            }
            columnComp[ j ] = 0;
        }

        for( l = 0; l < SIZE; l += 3 ){
            for( n = 0; n < SIZE; n += 3 ){
                for( j = l; j < l + 3; j++ ){
                    for( k = n; k < n + 3; k++ ){

                        switch( matrix[ j ][ k ] ){

                            case 1: miniMatrix += 3; break;
                            case 2: miniMatrix += 5; break;
                            case 3: miniMatrix += 7; break;
                            case 4: miniMatrix += 11; break;
                            case 5: miniMatrix += 13; break;
                            case 6: miniMatrix += 17; break;
                            case 7: miniMatrix += 19; break;
                            case 8: miniMatrix += 23; break;
                            case 9: miniMatrix += 29; break;
                        }
                    }
                }
                if( miniMatrix == 127 ){
                        yes++;
                    }
                    miniMatrix = 0;
            }
        }

        if( yes == 27 ){
            printf( "Instancia %d\nSIM", i + 1 );
        }
        else{
            printf( "Instancia %d\nNAO", i + 1 );
        }

        puts( "\n" );
        yes = 0;
    }

    return 0;
}
