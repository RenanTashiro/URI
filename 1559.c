#include <stdio.h>
#define MAX 4
#define FOUND 5
#define NOT_FOUND 0

int checkDown( int matrix[MAX][MAX] );
int checkLeft( int matrix[MAX][MAX] );
int checkRight( int matrix[MAX][MAX] );
int checkUp( int matrix[MAX][MAX] );
void swap( int *a, int *b );

int main( void )
{
    int N;
    int result_down = 0, result_left = 0, result_right = 0, result_up = 0;
    unsigned k, i, j;

    scanf( "%d", &N );

    for( k = 0; k < N; k++ ){

        int matrix[MAX][MAX];

        for( i = 0; i < MAX; i++){
            for( j = 0; j < MAX; j++ ){
                scanf( "%d", &matrix[i][j] );
            }
        }

        result_down = checkDown( matrix );
        if( result_down == FOUND ) { puts( "NONE" ); continue; }
        result_left = checkLeft( matrix );
        if( result_left == FOUND ) {  puts( "NONE" ); continue; }
        result_right = checkRight( matrix );
        if( result_right == FOUND ) {  puts( "NONE" ); continue; }
        result_up = checkUp( matrix );
        if( result_up == FOUND ) {  puts( "NONE" ); continue; }


        if( result_down ){
            printf( "%s", "DOWN" );
        }
        if( result_left ){
            printf( " %s", "LEFT" );
        }
        if( result_right ){
            printf( " %s", "RIGHT" );
        }
        if( result_up ){
            printf( " %s", "UP" );
        }

        puts( "" );


        for( i = 0; i < MAX; i++){
            for( j = 0; j < MAX; j++ ){
                printf( "%d ", matrix[i][j] );
            }
            puts( "" );
        }

    }

    return 0;
}

int checkDown( int matrix[MAX][MAX] )
{
    int i, j, flag = 0;

    for( j = 0; j < MAX; j++){
        for( i = 0; i < MAX; i++ ){
            if( matrix[i][j] == 2048 ){
                    goto end;
            }
            else if( matrix[i][j] != 0 ){
                if( matrix[i+1][j] == 0 ){
                    swap( &matrix[i][j], &matrix[i+1][j] );
                    flag = 1;
                    i = -1;
                }
                else if( matrix[i+1][j] == matrix[i][j] ){
                    matrix[i+1][j] *= 2;
                    matrix[i][j] = 0;
                    flag = 1;
                    i = -1;
                }
            }
        }
    }

    if( flag ) return 1;
    else return NOT_FOUND;
    end:return FOUND;
}

int checkLeft( int matrix[MAX][MAX] )
{
    int i, j, flag = 0;

    for( i = 0; i < MAX; i++){
        for( j = MAX - 1; j >= 0; j-- ){
            if( matrix[i][j] == 2048 ){
                    goto end;
            }
            else if( matrix[i][j] != 0 ){
                if( matrix[i][j-1] == 0 ){
                    swap( &matrix[i][j], &matrix[i][j-1] );
                    flag = 1;
                    j = MAX;
                }
                else if( matrix[i][j-1] == matrix[i][j] ){
                    matrix[i][j-1] *= 2;
                    matrix[i][j] = 0;
                    flag = 1;
                    j = MAX;
                }
            }
        }
    }

    if( flag ) return 1;
    else return NOT_FOUND;
    end:return FOUND;
}

int checkRight( int matrix[MAX][MAX] )
{
    int i, j, flag = 0;

    for( i = 0; i < MAX; i++){
        for( j = 0; j < MAX; j++ ){
            if( matrix[i][j] == 2048 ){
                    goto end;
            }
            else if( matrix[i][j] != 0 ){
                if( matrix[i][j+1] == 0 ){
                    swap( &matrix[i][j], &matrix[i][j+1] );
                    flag = 1;
                    j = -1;
                }
                else if( matrix[i][j+1] == matrix[i][j] ){
                    matrix[i][j-1] *= 2;
                    matrix[i][j] = 0;
                    flag = 1;
                    j = -1;
                }
            }
        }
    }

    if( flag ) return 1;
    else return NOT_FOUND;
    end:return FOUND;
}

int checkUp( int matrix[MAX][MAX] )
{
    int i, j, flag = 0;

    for( j = 0; j < MAX; j++){
        for( i = MAX - 1; i >= 0; i-- ){
            if( matrix[i][j] == 2048 ){
                    goto end;
            }
            else if( matrix[i][j] != 0 ){
                if( matrix[i-1][j] == 0 ){
                    swap( &matrix[i][j], &matrix[i-1][j] );
                    flag = 1;
                    i = MAX;
                }
                else if( matrix[i-1][j] == matrix[i][j] ){
                    matrix[i-1][j] *= 2;
                    matrix[i][j] = 0;
                    flag = 1;
                    i = MAX;
                }
            }
        }
    }

    if( flag ) return 1;
    else return NOT_FOUND;
    end:return FOUND;
}

void swap( int *a, int *b )
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

