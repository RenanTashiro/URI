#include <stdio.h>
#include <string.h>

int main()
{
    char str[100001];
    unsigned i;

    while( scanf( "%100000s", str ) != EOF ){

        int index;
        char home[100001] = "\0", middle[100001] = "\0", end[100001] = "\0";

        for( i = 0; str[i] != '\0'; i++ ){
            if( str[i] == '[' || str[i] == ']' ){
                memcpy( middle, str, i );
                index = i;
                break;
            }
        }

        while( str[i] != '\0' ){
            if( str[i] == '[' ){
                memcpy( home, &str[index], i - index );
                strcat( home, middle );
                strcpy( middle, home );
                index = i;
            }
            else if( str[i] == ']' ){
                memcpy( end, &str[index], i - index );
                strcat( middle, end );
                index = i;
            }
            i++;
        }

        puts( middle );
    }

    return 0;
}




