#include <stdio.h>
#include <stdlib.h>

struct nodeTree{
    struct nodeTree *previousNode;
    char value;
    struct nodeTree *nextNode;
};

typedef struct nodeTree NodeTree;
typedef NodeTree *NodeTreePtr;

void insertTree( NodeTreePtr *nodeTree, const char value )
{
    if( *nodeTree == NULL ){
        *nodeTree = malloc( sizeof( NodeTree ) );
        ( *nodeTree )->previousNode = NULL;
        ( *nodeTree )->value = value;
        ( *nodeTree )->nextNode = NULL;
    }
    else{
        if( value < ( *nodeTree )->value )
            insertTree( &( *nodeTree )->previousNode, value );
        else
            insertTree( &( *nodeTree )->nextNode, value );
    }
}

void preOrder( NodeTreePtr node )
{
    if( node != NULL ){
        printf( " %c", node->value );
        preOrder( node->previousNode );
        preOrder( node->nextNode );
    }
}

void inOrder( NodeTreePtr node )
{
    if( node != NULL ){
        inOrder( node->previousNode );
        printf( " %c", node->value );
        inOrder( node->nextNode );
    }
}

void posOrder( NodeTreePtr node )
{
    if( node != NULL ){
        posOrder( node->previousNode );
        posOrder( node->nextNode );
        printf( " %c", node->value );
    }
}

int main()
{
    int T, counter = 1;
    unsigned i;

    scanf( "%d", &T );

    for( i = 0; i < T; i++ ){

        NodeTreePtr rootTree = NULL;

        int N;
        char value;
        unsigned j;

        scanf( "%d", &N );
        getchar();

        for( j = 0; j < N; j++ ){
            scanf( " %c", &value );
            insertTree( &rootTree, value );
        }

        printf( "Case %d:\n", counter++ );
        printf( "%s", "Pre.:" ); preOrder( rootTree ); puts( "" );
        printf( "%s", "In..:" ); inOrder( rootTree ); puts( "" );
        printf( "%s", "Post:" ); posOrder( rootTree ); puts( "\n" );

    }

    return 0;
}
