/*
Nome:      Conta
ID:        1866
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   244 Bytes
Submissao: 11/08/15 09:57:51
*/
#include <stdio.h>

int main()
{
    int N;

    scanf( "%d", &N );

    while( N-- )
    {
       int num;

	scanf( "%d", &num );

	if( num & 1 )
	    puts( "1" );
       	else
  	    puts( "0" ); 
    }

    return 0;
}
