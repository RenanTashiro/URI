/*
Nome:      Economia Brasileira
ID:        1796
Resposta:  Accepted
Linguagem: C
Tempo:     0.048s
Tamanho:   414 Bytes
Submissao: 28/05/15 15:11:57
*/
#include <stdio.h>

int main()
{
    long int Q;

    scanf( "%ld", &Q );

    unsigned i;
    long int voto, total_voto = 0;

    for( i = 0; i < Q; i++ ){
        scanf( "%ld", &voto );
        if( voto == 0 ){
            total_voto++;
        }
    }

    if( total_voto > Q / 2 ){
        printf( "%c\n", 'Y' );
    }
    else{
        printf( "%c\n", 'N' );
    }

    return 0;
}
