#include <stdio.h>

int main()
{
    int n;
    unsigned i;

    while( scanf( "%d", &n ) && n != 0 ){

        for( i = 0; i < n / 4; i++ ){
            printf( "%s", "NONP" );
        }

        int remain = n % 4;

        switch( remain ){
            case 1: printf( "%s\n", "N" ); break;
            case 2: printf( "%s\n", "NO" ); break;
            case 3: printf( "%s\n", "NON" ); break;
        }
    }
    puts( "" );
    return 0;
}
