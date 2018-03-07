/*
Nome:      Pokémon!
ID:        1836
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   915 Bytes
Submissao: 22/06/15 09:16:03
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int T, counter = 1;
    unsigned i;

    scanf( "%d", &T );

    for( i = 0; i < T; i++ ){

        char pokemon_name[100];
        int level;

        scanf( "%99s%d", pokemon_name, &level );

        int attribute[4], Bs, IV, EV;
        unsigned j;

        scanf( "%d%d%d", &Bs, &IV, &EV );
        attribute[0] = ( ( IV + Bs + sqrt( EV ) / 8 + 50 ) * level ) / 50 + 10;

        for( j = 1; j < 4; j++ ){
            scanf( "%d%d%d", &Bs, &IV, &EV );
            attribute[j] = ( ( IV + Bs + sqrt( EV ) / 8 ) * level ) / 50 + 5;
        }

        printf( "Caso #%d: %s nivel %d\n", counter++, pokemon_name, level );
        printf( "HP: %d\n", attribute[0] );
        printf( "AT: %d\n", attribute[1] );
        printf( "DF: %d\n", attribute[2] );
        printf( "SP: %d\n", attribute[3] );
    }

    return 0;
}

