/*
Nome:      O Óscar Vai Para...
ID:        1811
Resposta:  Accepted
Linguagem: C
Tempo:     0.016s
Tamanho:   2,54 KB
Submissao: 25/09/15 14:41:59
*/
#include <stdio.h>

struct heart_beat{
    int begin;
    int end;
    int difference;
    int increasing;
    int index;
};

typedef struct heart_beat Heart_beat;

void insercionSort( Heart_beat*, size_t size );

int main()
{
    int n, m, counter = 1;

    while( scanf( "%d", &n ) && n != 0 ){

        scanf( "%d", &m );

        if( m == 0 ){
            printf( "Instancia #%d\n", counter++ );
            printf( "%d\n\n", 1 );
            continue;
        }
        int famous[n][m];
        unsigned i, j;

        for( i = 0; i < n; i++ ){
            for( j = 0; j < m; j++ ){
                scanf( "%d", &famous[i][j] );
            }
        }

        int max_so_far = 0, actual_max_value = 1, aux_begin;
        Heart_beat data[n];

        for( i = 0; i < n; i++ ){
            data[i].begin = data[i].end = data[i].difference = data[i].increasing = 0;
            data[i].index = i+1;
        }

        for( i = 0; i < n; i++ ){
            for( j = 0; j < m; j++ ){

                if( famous[i][j] < famous[i][j+1] ){
                    aux_begin = famous[i][j];
                    while( famous[i][j] < famous[i][j+1] && j + 1 < m ){
                        actual_max_value++;
                        j++;
                    }
                }
                if( actual_max_value > max_so_far ){
                    max_so_far = actual_max_value;
                    data[i].begin = aux_begin;
                    data[i].end = famous[i][j];
                }

                actual_max_value = 1;
            }

            data[i].difference =  data[i].end - data[i].begin;
            data[i].increasing = max_so_far;
            max_so_far = 0;
        }

        insercionSort( data, n );

         printf( "Instancia #%d\n", counter++ );
         printf( "%d\n\n", data[0].index );
    }

    return 0;
}

void insercionSort( Heart_beat *arr, size_t size )
{
    int i, j;
    Heart_beat tmp;

    for( i = 0; i < size; i++ ){
        j = i;
        tmp = arr[j];
        while( tmp.increasing > arr[j-1].increasing && j > 0 ){
            arr[j] = arr[j-1];
            j--;
        }
        while( tmp.increasing == arr[j-1].increasing && tmp.difference > arr[j-1].difference && j > 0 ){
            arr[j] = arr[j-1];
            j--;
        }
        while( tmp.increasing == arr[j-1].increasing && tmp.difference == arr[j-1].difference && tmp.end > arr[j-1].end && j > 0 ){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = tmp;
    }
}
