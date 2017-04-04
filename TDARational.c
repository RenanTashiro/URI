#include <stdio.h>
#include <math.h>

int MDC( int a, int b );

int main()
{
    int cases;
    scanf( "%d", &cases );

    unsigned int i;

    for( i = 0; i < cases; i++){

        int mdc;
        int result[2];
        int N[2];
        int D[2];
        char op[3];

        scanf( "%d %c %d", &N[0], &op[0], &D[0] );
        scanf( " %c", &op[1] );
        scanf( "%d %c %d", &N[1], &op[2], &D[1] );

        switch( op[1] ){

            case '+': result[0] = N[0] * D[1] + N[1] * D[0];
                      result[1] = D[0] * D[1]; break;
            case '-': result[0] = N[0] * D[1] - N[1] * D[0];
                      result[1] = D[0] * D[1]; break;
            case '*': result[0] = N[0] * N[1];
                      result[1] = D[0] * D[1]; break;
            case '/': result[0] = N[0] * D[1];
                      result[1] = N[1] * D[0]; break;
        }
        mdc = MDC( result[0], result[1] );

        if( mdc < 0 ){
            mdc = fabs( mdc );
        }
        printf( "%d", mdc );
        puts( "" );
        printf( "%d/%d = %d/%d", result[0], result[1], result[0] / mdc, result[1] / mdc );
        puts( "" );
    }
}
int MDC( int a, int b )
{
    int r;

    while( b != 0 ){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
