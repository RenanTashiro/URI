#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLEN 20

int flag = 0;

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
        if( !flag ){ printf( "%c", node->value ); flag = 1; }
        else        printf( " %c", node->value );
        preOrder( node->previousNode );
        preOrder( node->nextNode );
    }
}

void inOrder( NodeTreePtr node )
{
    if( node != NULL ){
        inOrder( node->previousNode );
        if( !flag ){ printf( "%c", node->value ); flag = 1; }
        else        printf( " %c", node->value );
        inOrder( node->nextNode );
    }
}

void posOrder( NodeTreePtr node )
{
    if( node != NULL ){
        posOrder( node->previousNode );
        posOrder( node->nextNode );
        if( !flag ){ printf( "%c", node->value ); flag = 1; }
        else        printf( " %c", node->value );
    }
}

void find_node( NodeTreePtr node, const char value, int* flag )
{
    if( node == NULL ){
        return;
    }
    else{
        if( value == node->value ){
            *flag = 1;
            return;
        }
        else if( value < node->value )
            find_node( node->previousNode, value, flag );
        else if( value > node->value )
            find_node( node->nextNode, value, flag );
    }
}

int main()
{
    NodeTreePtr treePtr = NULL;
    char ins[MAXLEN];

    while( scanf( "%[^\n]", ins ) != EOF ){

        if( strlen( ins ) < 4 ){
            if( ins[0] == 'I' ){
                insertTree( &treePtr, ins[2] );
            }
            else if( ins[0] == 'P' ){
                int flag = 0;
                find_node( treePtr, ins[2], &flag );
                if( flag )
                    printf( "%c existe\n", ins[2] );
                else
                    printf( "%c nao existe\n", ins[2] );
            }
        }
        else{
            flag = 0;
            if( strcmp( ins, "INFIXA" ) == 0 )
                inOrder( treePtr );
            else if( strcmp( ins, "PREFIXA" ) == 0 )
                preOrder( treePtr );
            else if( strcmp( ins, "POSFIXA" ) == 0 )
                posOrder( treePtr );

            puts( "" );
        }

        getchar();
    }

    return 0;
}
