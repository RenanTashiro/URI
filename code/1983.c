#include <stdio.h>

int main()
{
    int N, ID = 0;
    double notaMax = 0;

    scanf( "%d", &N );

    while( N-- )
    {
        int id;
        double nota;

        scanf( "%d%lf", &id, &nota );

        if( nota > notaMax ) {
            notaMax = nota;
            ID = id;
        }
    }

    if( notaMax >= 8.0 ) {
        printf( "%d\n", ID );
    }
    else {
        puts( "Minimum note not reached" );
    }

    return 0;
}
