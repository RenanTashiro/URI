/*
Nome:      Detetive Watson
ID:        1533
Resposta:  Accepted
Linguagem: C
Tempo:     0.012s
Tamanho:   1.009 Bytes
Submissao: 27/04/15 14:27:09
*/
#include <stdio.h>

void insercionSort( int *arry, int *index, size_t size );

int main()
{
    int N;

    while( scanf( "%d", &N ) && N != 0 ){

        int V[ N ];
        int index[ N ];

        unsigned i;

        for( i = 0; i < N; i++ ){
            index[i] = i;
        }

        for( i = 0; i < N; i++ ){
            scanf( "%d", &V[i] );
        }

        if( N == 1){
            puts( "1" );
        }
        else{
            insercionSort( V, index, N );
            printf( "%d\n", index[N-2] + 1 );
        }
    }
    return 0;
}

void insercionSort( int *arry, int *index, size_t size  ){

    int i, j, temp, temp_index;

    for( i = 1; i < size; i++ ){

        j = i;
        temp = arry[j];
        temp_index = index[j];

        while( temp < arry[j-1] && j > 0 ){
            arry[j] = arry[j-1];
            index[j] = index[j-1];
            j--;
        }

        arry[j] = temp;
        index[j] = temp_index;
    }
}
