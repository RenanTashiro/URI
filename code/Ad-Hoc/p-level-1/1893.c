/*
Nome:      Fases da Lua
ID:        1893
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   448 Bytes
Submissao: 24/08/15 19:31:46
*/
#include <stdio.h>

int main()
{
    int anteontem, ontem;

    scanf( "%d%d", &anteontem, &ontem );

    if( 0 <= ontem && ontem <= 2 )
        puts( "nova" );
    else if( 97 <= ontem && ontem <= 100 )
        puts( "cheia" );
    else if( 3 <= ontem && ontem <= 96 && ontem >= anteontem )
        puts( "crescente" );
    else if( 3 <= ontem && ontem <= 96 && ontem < anteontem )
        puts( "minguante" );

    return 0;
}
