#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    double b_raio, m_raio, cm_area, t_area, half_p;

    while( scanf( "%d%d%d", &a, &b, &c ) != EOF ){

        half_p = ( float ) ( a + b + c ) / 2;
        t_area = ( float ) sqrt( half_p * ( half_p - a ) * ( half_p - b ) * ( half_p - c ) );

        b_raio = ( float ) ( a * b * c ) / sqrt( ( a + b + c ) * ( b + c - a ) * ( a + b - c ) );

        m_raio = ( float ) ( b + c - a ) / 2;
        cm_area = ( float ) M_PI * pow( m_raio , 2 );

        printf( "RAIO = %.4lf\n", b_raio / 2 );
        printf( "AREA T = %.4lf\n", ( float ) t_area );
        printf( "AREA CM = %.4lf\n",( float ) M_PI * pow( b_raio / 2, 2 ) - t_area );
        printf( "AREA Cm = %.4lf\n", cm_area );
    }

    return 0;
}
