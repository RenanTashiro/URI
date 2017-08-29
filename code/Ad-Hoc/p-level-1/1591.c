/*
Nome:      Dia da Vovó
ID:        1591
Resposta:  Accepted
Linguagem: C
Tempo:     0.032s
Tamanho:   2,44 KB
Submissao: 16/06/15 09:40:06
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    unsigned l;

    scanf( "%d", &T );

    for( l = 0; l < T; l++ ){

        int L, C;

        scanf( "%d%d", &L, &C );

        char puzzle[L][C+1];
        unsigned i, j, k;

        for( i = 0; i < L; i++ ){
            scanf( "%50s", puzzle[i] );
        }

        int P;

        scanf( "%d", &P );

        char word[P][51];
        int frequency[P], counter, index;

        memset( frequency, 0, sizeof( frequency ) );

        for( i = 0; i < P; i++ ){
            scanf( "%50s", word[i] );
        }

        for( k = 0; k < P; k++ ){
            for( i = 0; i < L; i++ ){
                    counter = 0;
                    index = -1;
                for( j = 0; j < C; j++ ){
                    if( puzzle[i][j] == word[k][counter] ){
                        counter++;
                        if( index == -1 )
                            index = j;
                    }
                    else{
                        if( counter == strlen( word[k] ) ){
                            frequency[k]++;
                        }
                        counter = 0;
                        if( index != -1 ) j = index;
                        index = -1;
                    }
                }
                if( counter == strlen( word[k] ) ) frequency[k]++;
            }
        }

        for( k = 0; k < P; k++ ){
            if( strlen( word[k] ) > 1 ){
                for( j = 0; j < C; j++ ){
                        counter = 0;
                        index = -1;
                    for( i = 0; i < L; i++ ){
                        if( puzzle[i][j] == word[k][counter] ){
                            counter++;
                            if( index == -1 )
                                index = i;
                        }
                        else{
                            if( counter == strlen( word[k] ) ){
                                frequency[k]++;
                            }
                            counter = 0;
                            if( index != -1 ) i = index;
                            index = -1;
                        }
                    }
                    if( counter == strlen( word[k] ) ) frequency[k]++;
                }
            }
        }

        for( i = 0; i < P; i++ ){
            printf( "%d\n", frequency[i] );
        }
    }

    return 0;
}
