#include <stdio.h>
#include <stdlib.h>

struct letter{
    int index;
    int frequency;
};

int compare( const void *a, const void *b )
{
    struct letter ca = *( struct letter* )a;
    struct letter cb = *( struct letter* )b;
    if( ca.frequency < cb.frequency ) return -1;
    if( ca.frequency > cb.frequency ) return 1;
    if( ca.index > cb.index ) return -1;
    else return 1;
}

int search( struct letter *arr )
{
    int min = 0, max = 96;
    int mid = ( max + min ) / 2;

    while( min <= max ){
        if( arr[mid].frequency > 0 ){
            while( arr[mid].frequency >= arr[mid-1].frequency ) mid--;
            return ++mid;
        }
        else if( arr[mid].frequency == 0 ){
            min = mid + 1;
            mid = ( max + min ) / 2;
        }
    }

    return -1;
}

int main()
{
    char c[1001];
    struct letter input[97];
    int index = -1;

    while( scanf( " %1000[^\n]", c ) != EOF ){

        if( index > -1 )  puts( "" );

        unsigned i;

        for( i = 0; i < 97; i++ ){
            input[i].index = i + 32;
            input[i].frequency = 0;
        }

        for( i = 0; c[i] != '\0'; i++ ){
            index = ( int )c[i] - 32;
            input[index].frequency++;
        }

        qsort( input, 97, sizeof( struct letter ), compare );

        for( i = search( input ); i < 97; i++ ){
            printf( "%d %d\n", input[i].index, input[i].frequency );
        }
    }

    return 0;
}
