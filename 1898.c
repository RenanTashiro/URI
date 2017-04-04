#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXL 70
#define MAXC 12

int main()
{
    char str1[MAXL], str2[MAXL];
    unsigned i;

    scanf( "%60s%60s", str1, str2 );

    int counter = 0;
    char cpf[MAXC] = "\0", n1[MAXL], n2[MAXL];

    for( i = 0; str1[i] != '\0'; i++ )
    {
        char tmp = str1[i];
        if( isdigit( tmp ) );
        {
            printf( "%c\n", tmp  );
            /*if( counter < 11 )
            {*/
                strncat( cpf, ( str1 + i ), 1 );
            //}
            /*else
            {
                char tmp = str1[i];
                strcat( n1, &tmp );
            }*/
        }
    }

    /*for( i = 0; i < strlen( str2 ); i++ )
    {
        if( isdigit( str2[i] ) || str2[i] == '.' );
        {
            char tmp = str2[i];
            strcat( n2, &tmp );
        }
    }*/

    puts( cpf );

    return 0;
}
