/*
Nome:      Percurso em Árvore por Nível
ID:        1466
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.092s
Tamanho:   1,7 KB
Submissao: 07/08/15 09:04:43
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 2000

struct tree{
    struct tree* leftPtr;
    int number;
    struct tree* rightPtr;
};

typedef struct tree Tree;
typedef Tree* TreeNodePtr;

void insert( TreeNodePtr* node, const int value );
void search( TreeNodePtr node );

int main()
{
    int C, caso = 1;

    scanf( "%d", &C );

    while( C-- ){

        TreeNodePtr root = NULL;
        int N, n;

        scanf( "%d", &N );

        while( N-- ){
            scanf( "%d", &n );
            insert( &root, n );
        }

        printf( "Case %d:\n", caso++ );
        search( root );
        puts( "\n" );
    }

    return 0;
}

void insert( TreeNodePtr* node, const int value )
{
    if( *node == NULL ){
        *node = malloc( sizeof( Tree ) );
        ( *node )->leftPtr = NULL;
        ( *node )->number = value;
        ( *node )->rightPtr = NULL;
    }
    else{
        if( ( *node )->number < value )
            insert( &( *node )->rightPtr, value );
        else
            insert( &( *node )->leftPtr, value );
    }
}

void search( TreeNodePtr node )
{
    TreeNodePtr* queue[MAX];
    int idx = 0, ini = 0;

    if( node->leftPtr != NULL  )
        queue[idx++] = &( node )->leftPtr;
    if( node->rightPtr != NULL )
        queue[idx++] = &( node )->rightPtr;

    printf( "%d", node->number );

    while( ini < idx ){

        printf( " %d", ( *queue[ini] )->number );

        if( ( *queue[ini] )->leftPtr != NULL )
            queue[idx++] = &( *queue[ini] )->leftPtr;
        if( ( *queue[ini] )->rightPtr != NULL )
            queue[idx++] = &( *queue[ini] )->rightPtr;

        ini++;
    }
}
