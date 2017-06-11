#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXNAME 1000

typedef struct{
    char nome[MAXNAME];
    int habilidade;
}Futebol;

typedef struct{
    char **nome;
}Times;

int compare( const void *a, const void *b )
{
    Futebol cmpA = *( Futebol* )a;
    Futebol cmpB = *( Futebol* )b;
    return( cmpB.habilidade - cmpA.habilidade );
}

int main()
{
    int N, T;
    unsigned i, j;

    scanf( "%d%d", &N, &T );

    Futebol jogador[N];
    Times escalacao[T];

    for( i = 0; i < N; i++ ){
        scanf( "%s%d", jogador[i].nome, &jogador[i].habilidade );
    }

    qsort( jogador, N, sizeof( Futebol ), compare );

    int nJogadores = N / T, index = 0, counter = 0;

    /*for( i = 0; i < N; i++ ){
        puts( jogador[i].nome );
    }*/

    for( i = 0; i < T; i++ ){
        escalacao[i].nome = ( char** ) malloc( ( nJogadores ) * sizeof( char ) );
        for( j = 0; j < nJogadores; j++ ){
            escalacao[i].nome[j] = ( char* ) malloc( MAXNAME * sizeof( char ) );
        }
    }


    for( i = 0; i < N; i++ ){
        strcpy( escalacao[index%T].nome[counter], jogador[i].nome );
        if( i + 1 % T == 0 ){
            counter++;
        }
    }

    int time = 1;

    for( i = 0; i < T; i++ ){
        printf( "Time %d\n", time++ );
        for( j = 0; escalacao[i].nome[j][0] != '\0'; j++ ){
            puts( escalacao[i].nome[j] );
        }
        puts( "" );
    }

    return 0;
}
