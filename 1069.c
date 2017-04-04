#include <stdio.h>
#include <string.h>
int main()
{
    int N, diamond = 0;
    unsigned i, j, index;

    scanf( "%d ", &N );

    for( j = 0; j < N; j++ ){

        char expression[1001];
        char c;

        while( scanf( "%c", &c ) && c != '\n' ){

            if( c == '<' || c == '>' ){
                strncat( expression, &c, 1 );
            }
        }
        puts( expression );
        for( i = 0; i < strlen( expression ); i++ ){
            if( expression[i] == '<' ){

                index = i + 1;

                while( expression[index] == '0' ){
                    index++;
                }

                if( expression[index] == '>' ){
                    i = 1;
                    diamond++;
                    expression[i] = '0';
                    expression[index] = '0';
                }
            }
        }

        printf( "%d\n", diamond );

        expression[0] = '\0';
        diamond = 0;
    }

    return 0;
}
