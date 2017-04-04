#include <stdio.h>
#include <stdlib.h>

struct treeNode{
    struct treeNode *leftPtr;
    int value;
    struct treeNode *rightPtr;
};

typedef struct treeNode TreeNode;
typedef TreeNode *TreeNodePtr;

void insertNode( TreeNodePtr *treePtr, int value, const int mod );
void printTree( TreeNodePtr treePtr );

int main()
{
    int N, M, value;

    while( scanf( "%d%d", &N, &M ) && N != 0 ){

        printf( "%d %d\n", N, M );

        TreeNodePtr rootNode = NULL;
        unsigned i;

        for( i = 0; i < N; i++ ){
            scanf( "%d", &value );
            insertNode( &rootNode, value, M );
        }

        printTree( rootNode );
    }

    puts( "0 0" );

    return 0;
}

void insertNode( TreeNodePtr *treePtr, int value, const int mod )
{
    if( *treePtr == NULL ){
        *treePtr = malloc( sizeof( TreeNode ) );
        ( *treePtr )->value = value;
        ( *treePtr )->leftPtr = NULL;
        ( *treePtr )->rightPtr = NULL;
    }
    else{
        if( ( value % mod ) < ( ( *treePtr )->value % mod ) ){
            insertNode( &( ( *treePtr )->leftPtr ), value, mod );
        }
        else if( ( value % mod ) > ( ( *treePtr )->value % mod ) ){
            insertNode( &( ( *treePtr )->rightPtr ), value, mod );
        }
        else{
            if( value & 1 && !( ( *treePtr )->value & 1 ) ){
                insertNode( &( ( *treePtr )->leftPtr ), value, mod );
            }
            else if( !( value & 1 ) && ( ( *treePtr )->value & 1 ) ){
                insertNode( &( ( *treePtr )->rightPtr ), value, mod );
            }
            else if( value & 1 && ( ( *treePtr )->value & 1 ) ){
                if( value > ( *treePtr )->value  ){
                    insertNode( &( ( *treePtr )->leftPtr ), value, mod );
                }
                else{
                    insertNode( &( ( *treePtr )->rightPtr ), value, mod );
                }
            }
            else{
                if( value < ( *treePtr )->value ){
                    insertNode( &( ( *treePtr )->leftPtr ), value, mod );
                }
                else{
                    insertNode( &( ( *treePtr )->rightPtr ), value, mod );
                }
            }
        }
    }
}

void printTree( TreeNodePtr treePtr )
{
    if( treePtr != NULL ){
        printTree( treePtr->leftPtr );
        printf( "%d\n", treePtr->value );
        printTree( treePtr->rightPtr );
    }
}
