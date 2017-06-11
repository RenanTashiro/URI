#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLEN 20

struct tree{
    struct tree* leftNode;
    char value;
    struct tree* rightNode;
};

typedef struct tree Tree;
typedef Tree* TreePtr;

void insert_node( TreePtr* node, const char value );
void find_node( TreePtr node, const char value, int* flag );
void inOrder( TreePtr node );
void preOrder( TreePtr node );
void posOrder( TreePtr node );

int main()
{
    TreePtr treePtr = NULL;
    char ins[MAXLEN];

    while( scanf( "%[^\n]", ins ) != EOF ){

        if( strlen( ins ) < 4 ){
            if( ins[0] == 'I' ){
                insert_node( &treePtr, ins[2] );
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

void insert_node( TreePtr* node, const char value )
{
    if( *node == NULL ){
        *node = malloc( sizeof( Tree ) );
        ( *node )->leftNode = NULL;
        ( *node )->value = value;
        ( *node )->rightNode = NULL;
    }
    else{
        if( value < ( *node )->value )
            insert_node( &( *node )->leftNode, value );
        else if( value > ( *node )->value )
            insert_node( &( *node )->rightNode, value );
    }
}

void find_node( TreePtr node, const char value, int* flag )
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
            find_node( node->leftNode, value, flag );
        else if( value > node->value )
            find_node( node->rightNode, value, flag );
    }
}

void inOrder( TreePtr node )
{
    if( node != NULL ){
        inOrder( node->leftNode );
        printf( "%c ", node->value );
        inOrder( node->rightNode );
    }
}

void preOrder( TreePtr node )
{
    if( node != NULL ){
        printf( "%c ", node->value );
        inOrder( node->leftNode );
        inOrder( node->rightNode );
    }
}

void posOrder( TreePtr node )
{
    if( node != NULL ){
        inOrder( node->leftNode );
        inOrder( node->rightNode );
        printf( "%c ", node->value );
    }
}
