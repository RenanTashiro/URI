/*
Nome:      O Castelo de Neve de Sansa
ID:        1877
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   455 Bytes
Submissao: 12/08/15 09:21:13
*/
#include <stdio.h>

int main()
{
    int N, K, counter = 0;

    scanf( "%d%d", &N, &K );

    int towers[N];
    unsigned i;

    for( i = 0; i < N; i++ )
        scanf( "%d", &towers[i] );

    for( i = 1; i < N - 1; i++ )
    {
        if( towers[i-1] < towers[i] && towers[i] > towers[i+1] )
            counter++;
    }

    if( counter == K )
        puts( "beautiful" );
    else
        puts( "ugly" );

    return 0;
}
