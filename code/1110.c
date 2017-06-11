#include <stdio.h>
#include <stdlib.h>

struct list{
    int data;
    struct list *next;
};

typedef struct list List;
typedef List *ListPtr;

void insert_begin( ListPtr *start, const unsigned N );
void erase_element( ListPtr *start );
void push_back( ListPtr *start, const unsigned value );

int main()
{
    int N;
    unsigned i;

    while( scanf( "%d", &N ) && N != 0 ){

        if( N == 1 ){
            puts( "Discarded cards:" );
            puts( "Remaining card: 1" );
        }
        else{

            ListPtr start = NULL;

            for( i = N; i >= 1; i-- ){
                insert_begin( &start, i );
            }

            printf( "%s %d", "Discarded cards:", start->data );
            erase_element( &start );
            push_back( &start, start->data );
            erase_element( &start );


            while( start->next != NULL ){
                printf( ", %d", start->data );
                erase_element( &start );
                push_back( &start, start->data );
                erase_element( &start );
            }

            printf( "\n%s%d\n", "Remaining card: ", start->data );
            free( start );
        }
    }

    return 0;
}

void insert_begin( ListPtr* start, const unsigned N )
{

    ListPtr node = malloc( sizeof( List ) );

    node->data = N;
    node->next = *start;

    *start = node;
}

void erase_element( ListPtr *start )
{
    ListPtr tmp = *start;
    *start = ( *start )->next;
    free( tmp );
}

void push_back( ListPtr *start, const unsigned value )
{
    ListPtr node = malloc( sizeof( List ) );
    node->data = value;
    node->next = NULL;

    ListPtr tmp = *start;

    while( tmp->next != NULL ){
        tmp = tmp->next;
    }
    tmp->next = node;
}
