#include <stdio.h>
#include <stdlib.h>

struct listNode{
    int data;
    struct listNode *nextPtr;
};

typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

void insertNode( ListNodePtr *listPtr, int data );
void printList( ListNodePtr listPtr );

int main()
{
    int T;
    unsigned i;

    scanf( "%d", &T );

    for( i = 0; i < T; i++ ){

        if( i > 0 ) puts( "" );

        int M, C;
        unsigned j;

        scanf( "%d%d", &M, &C );

        int key;
        ListNodePtr rootPtr[100] = {NULL};

        for( j = 0; j < C; j++ ){
            scanf( "%d", &key );
            insertNode( &rootPtr[ key % M ], key );
        }

        for( j = 0; j < M; j++ ){
            printf( "%d ->", j );
            printList( rootPtr[j] );
            puts( " \\" );
        }
    }


    return 0;
}

void insertNode( ListNodePtr *listPtr, int data )
{
    if( *listPtr == NULL ){
        *listPtr = malloc( sizeof( ListNode ) );
        ( *listPtr )->data = data;
        ( *listPtr )->nextPtr = NULL;
    }
    else{
        insertNode( &( ( *listPtr )->nextPtr ), data );
    }
}

void printList( ListNodePtr listPtr )
{
    while( listPtr != NULL ){
        printf( " %d ->", listPtr->data );
        listPtr = listPtr->nextPtr;
    }
}
