/*
Nome:      Zero vale Zero
ID:        1871
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   417 Bytes
Submissao: 11/08/15 10:08:48
*/
#include <stdio.h>
#define MAXD 30

int main()
{
    int C, M;
    unsigned i;

    while( scanf( "%d%d", &C, &M ) && C != 0 && M != 0 )
    {

        char buffer[30];
        sprintf( buffer, "%d", C + M );

        for( i = 0; buffer[i] != '\0'; i++ )
        {
            if( buffer[i] != '0' )
	         printf( "%c", buffer[i] );
        }

        puts( "" ); 
    }

    return 0;
}
