/*
Nome:      Oráculo de Alexandria
ID:        1457
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   500 Bytes
Submissao: 12/05/15 09:56:44
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int T, N, K, mult = 1;
    long long int answer, tmp;
    char len[21];
    unsigned i;

    scanf( "%d", &T );

    for( i = 0; i < T; i++ ){

        scanf( "%d%20s", &N, len );

        K = strlen( len );
        answer = N;

        while( ( tmp = N - ( mult * K) ) >= 1 ){
            answer *= tmp;
            mult++;
        }

        printf( "%lld\n", answer );
        mult = 1;
    }

    return 0;
}
