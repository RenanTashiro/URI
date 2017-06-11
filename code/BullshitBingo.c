#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define true 1
#define false 0

void allToLower( char *str );

int main()
{
    int counter = 0, counter_words = 0, total_words = 0, index = 0;
    char word[26], c;
    char map[500][26];
    memset( map, '\0', 1 );
    _Bool flag = true;

    while( scanf( "%[A-Za-z]", word ) != EOF ){
        scanf( "%c", &c );

        if( strcmp( word, "BULLSHIT" ) == 0 ){
            total_words += counter_words;
            counter_words = 0;
            counter++;
            index = 0;
            memset( map, '\0', 1 );
            printf( "%d\n", total_words );
        }

        allToLower( word );

        unsigned i;

        for( i = 0; i <= index; i++ ){
            if( strcmp( word, map[i] ) == 0 ){
                flag = false;
            }
        }
        if( flag && strcmp( word, "BULLSHIT" ) != 0){
            counter_words++;
            strcpy( map[index], word );
            index++;
        }
        else{
            flag = true;
        }

        printf( "counter %d\n", counter_words );
    }

    printf( "%d / %d\n", total_words, counter ) ;

    return 0;
}

void allToLower( char *str )
{
    unsigned i;

    for( i = 0; str[i] != '\0'; i++ ){
        str[i] = tolower( str[i] );
    }
}
