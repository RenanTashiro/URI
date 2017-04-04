#include <stdio.h>

void insercionSort( int *arry, size_t size );
int binarySearch( const int key, const int *arry, size_t size );

int main()
{
    int N, Q, caso = 1, position;
    unsigned i;

    while( scanf( "%d%d", &N, &Q ) && N != 0 ){

        int arry[N];

        for( i = 0; i < N; i++ ){
            scanf( "%d", &arry[i] );
        }

        insercionSort( arry, N );

        int v_search[Q];

        for( i = 0; i < Q; i++ ){
            scanf( "%d", &v_search[i] );
        }

        printf( "CASE# %d:\n", caso++ );

        for( i = 0; i < Q; i++ ){

            position = binarySearch( v_search[i], arry, N );

            if( position == -1 ){
                printf( "%d not found\n", v_search[i] );
            }
            else{
                while( arry[position - 1] == v_search[i] && position > 1 ){
                    position--;
                }
                printf( "%d found at %d\n", v_search[i], position + 1 );
            }
        }

    }
    return 0;
}

void insercionSort( int *arry, size_t size )
{
    int i, j, temp;

    for( i = 1; i < size; i++ ){

        j = i;
        temp = arry[j];

        while( arry[j-1] > temp && j > 0 ){
            arry[j] = arry[j-1];
            j--;
        }
        arry[j] = temp;
    }
}

int binarySearch( const int key, const int *arry, size_t size )
{
    int min = 0, max = size - 1, mid;

    mid = ( max + min ) / 2;

    while( min <= max ){

        if( key == arry[mid] ){
            return mid;
        }
        else if( key > arry[mid] ){
            min = mid + 1;
        }
        else{
            max = mid - 1;
        }

        mid = ( max + min ) / 2;
    }

    return -1;
}
