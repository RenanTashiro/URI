#include <stdio.h>

int main()
{
    int v, teste = 1;

    while( scanf( "%d", &v ) && v != 0 ){

        int v50, v10, v5;

        v50 = v / 50;
        v %= 50;

        v10 = v / 10;
        v %= 10;

        v5 = v / 5;
        v %= 5;

        printf( "Teste %d\n", teste++ );
        printf( "%d %d %d %d\n\n", v50, v10, v5, v );

    }

    return 0;
}
