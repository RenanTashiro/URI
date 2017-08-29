/*
Nome:      Primeiro Dicionário de Andy
ID:        1215
Resposta:  Accepted
Linguagem: C
Tempo:     0.016s
Tamanho:   1,8 KB
Submissao: 30/06/15 19:47:43
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct treeNode{
    struct treeNode *leftPtr;
    char word[201];
    struct treeNode *rightPtr;
};

typedef struct treeNode TreeNode;
typedef TreeNode *TreeNodePtr;

void insertNode( TreeNodePtr *treePtr, char *word );
void inOrder( TreeNodePtr treePtr );

int main()
{
    TreeNodePtr rootNode = NULL;
    char word[201], aux[201] = "\0";

    while( fgets( word, 200, stdin ) != NULL ){

        int index = 0, counter = 0;
        unsigned i;

        for( i = 0; word[i] != '\0'; i++ ){
            if( isalpha( word[i] ) ){
                if( counter == 0 ) index = i;
                word[i] = tolower( word[i] );
                counter++;
            }
            else if( counter > 0 ){
                strncat( aux, &word[index], counter );
                insertNode( &rootNode, aux );
                counter = 0;
                aux[0] = '\0';
            }

        }
    }

    inOrder( rootNode );

    return 0;
}

void insertNode( TreeNodePtr *treePtr, char *word )
{
    if( *treePtr == NULL ){
        *treePtr = malloc( sizeof( TreeNode ) );

        strcpy( ( *treePtr )->word, word );
        ( *treePtr )->leftPtr = NULL;
        ( *treePtr )->rightPtr = NULL;
    }
    else{
        if( strcmp( ( *treePtr )->word, word ) > 0 ){
            insertNode(  &( ( *treePtr )->leftPtr ), word );
        }
        else if( strcmp( ( *treePtr )->word, word ) < 0 ){
            insertNode(  &( ( *treePtr )->rightPtr ), word );
        }
        else{
            return;
        }
    }
}

void inOrder( TreeNodePtr treePtr )
{
    if( treePtr != NULL ){
        inOrder( treePtr->leftPtr );
        puts( treePtr->word );
        inOrder( treePtr->rightPtr );
    }
}