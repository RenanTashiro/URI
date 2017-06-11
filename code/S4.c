#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXL 100


void cesarCript( char *str )
{
    char cesarLower[] = "abcdefghijklmnopqrstuvwxyz";
    char cesarUpper[] = "ABCDEFGHIJKLMNOPRQSTUVWXYZ";
    int i;

    for( i = 0; i < strlen( str ); i++ )
    {
        if( isalpha( str[i] ) )
        {
            if( isupper( str[i] ) )
                str[i] = cesarUpper[ ( int ) ( str[i] - 62 ) % 26 ];
            else
                str[i] = cesarLower[ ( int ) ( str[i] - 94 ) % 26 ];
        }
    }
}

int main()
{
    char str[MAXL];

    scanf( "%[^\n]", str );

    cesarCript( str );

    puts( str );

    return 0;
}
