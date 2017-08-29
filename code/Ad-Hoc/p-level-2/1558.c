/*
Nome:      Soma de Dois Quadrados
ID:        1558
Resposta:  Accepted
Linguagem: C
Tempo:     0.096s
Tamanho:   1,47 KB
Submissao: 28/06/15 13:06:35
*/
#include <stdio.h>
#include <stdbool.h>

int binarySearch( const int key, const int *arry, size_t size );
bool YES = false;

int main()
{
    int squares_numbers[101];
    unsigned i, j;

    for( i = 0; i < 101; i++ ){
        squares_numbers[i] = i * i;
    }

    int number, location;

    while( scanf( "%d", &number ) != EOF ){

        if( number < 0 ){
            puts( "NO" );
            continue;
        }

        location = binarySearch( number, squares_numbers, 100 );

        if( location != -1 ){

            for( i = location; i > 0; i-- ){
                for( j = 0; j <= location; j++ ){
                    if( squares_numbers[i] + squares_numbers[j] == number ){
                        puts( "YES" );
                        YES = true;
                        goto end;
                    }
                }
            }
        }

        end:

        if( !YES ){
            puts( "NO" );
        }

        YES = false;
    }

    return 0;
}

int binarySearch( const int key, const int *arry, size_t size )
{
    int min = 0, max = size, mid;

    mid = ( max + min ) / 2;

    while( min <= max ){

        if( key == arry[mid] ){
            puts( "YES" );
            YES = true;
            return -1;
        }
        else if( key > arry[mid] ){
            min = mid + 1;
        }
        else{
            max = mid - 1;
        }

        mid = ( max + min ) / 2;
    }

    return mid;
}