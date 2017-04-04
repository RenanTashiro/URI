#include <stdio.h>
#define MAXTIME 10050

int main()
{
    int N;
    unsigned i;

    scanf( "%d", &N );

    int tempo_de_acesso[N], init = 0, tempo_total = 0, counter;
    _Bool ligado = 0;

    for( i = 0; i < N; i++ ){
        scanf( "%d", &tempo_de_acesso[i] );
    }

    for( i = 0; i <= MAXTIME; i++ ){
        if( tempo_de_acesso[init] == i ){
            ligado = 1;
            counter = 0;
            init++;
        }
        if( ligado == 1 ){
            tempo_total++;
            counter++;
            if( counter == 10 ){
                ligado = 0;
            }
        }
    }

    printf( "%d\n", tempo_total );

    return 0;
}
