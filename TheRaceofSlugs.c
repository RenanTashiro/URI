#include <stdio.h>

int main()
{
    int L;
    int speed, faster;
    unsigned int i;
    while( scanf( "%d", &L ) != EOF ){

        faster = 0;

        for( i = 0; i < L; i++ ){

            scanf( "%d", &speed );

            if( speed > faster )
                faster = speed;
        }
        if( faster < 10 )
            printf( "%d", 1 );
        else if( faster < 20 )
            printf( "%d", 2 );
        else
            printf( "%d", 3 );

        puts( "" );
    }
}

