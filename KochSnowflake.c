#include <stdio.h>
#include <math.h>
#define RAIZ_3 1.7320508075688772935

int main()
{
    double area = 0, len, nt = 1;

    while( scanf( "%lf", &len ) != EOF ){

        while( ( float ) len != 0 ){

            area += ( float ) nt * ( ( pow( len, 2 ) * RAIZ_3 ) / 4 );

            nt *= 3;
            len /= 3;
            printf( "%lf\n", area );
        }

        printf( "%lf\n", area );
        area = 0;
        nt = 1;
    }

    return 0;
}
