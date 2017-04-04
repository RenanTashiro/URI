#include <stdio.h>

int power( int base, int potencia )
{
  	unsigned i;

	for( i = 0; i < potencia - 1; i++ )
    {
    	base *= 2;
    }

  	return base;
}

int main( void )
{
    int N, counter = 1;

    while( scanf( "%d", &N ) && N != 0 ){

        printf( "Teste %d\n%d\n\n", counter, power( 2, N ) - 1 );
        counter++;
    }

    return 0;
}
