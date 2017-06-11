#include <stdio.h>
#include <ctype.h>
#include <string.h>

char conversorLower[] = "afcdefghifklmnofqrftufwfyf";
char conversorUpper[] = "AFCDEFGHIFKLMNOFQRFTUFWFYF";

int main()
{
    char c = '\0', previousC;

    while( scanf( "%c", &c ) != EOF )
    {
        if( isalpha( c ) )
        {
            if( islower( c ) )
                c = conversorLower[ ( int ) c - 97 ];
            else
                c = conversorUpper[ ( int ) c - 65 ];
        }

        if( c != '\0' && ( ( previousC == 'f' && ( c == 'f' || c == 'F' ) ) || ( previousC == 'F' && ( c == 'F' || c == 'f' ) ) ) )
            continue;

        printf( "%c", c );
        previousC = c;
    }

    return 0;
}

