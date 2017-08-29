/*
Nome:      Jornada nas Estrelas
ID:        1973
Resposta:  Accepted
Linguagem: C
Tempo:     0.236s
Tamanho:   847 Bytes
Submissao: 08/11/15 08:15:10
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    int i;

    scanf( "%d", &N );

    int star[N];
    long long total = 0;

    for( i = 0; i < N; i++ ) {
        scanf( "%d", &star[i] );
        total += star[i];
    }

    long long pivo = 0, counter = 0, roubados = 0;
    int visited[N];

    memset( visited, 0, sizeof( visited ) );

    while( pivo >= 0 && pivo < N ) {
        if( visited[pivo] == 0 ) {
            counter++;
            visited[pivo]++;
        }

        int parit = star[pivo];

        if( star[pivo] > 0 ) {
            roubados++;
            star[pivo]--;
        }

        if( parit & 1 ) {
            pivo++;
        }
        else {
            pivo--;
        }
    }

    printf( "%lld %lld\n", counter, total - roubados );

    return 0;
}
