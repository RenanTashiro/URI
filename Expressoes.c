#include <stdio.h>
#include <string.h>
#define MAXLEN 100001

int main()
{
    int T;
    unsigned i;

    scanf( "%d", &T );

    for( i = 0; i < T; i++ ){

        char expression[MAXLEN], pilha[MAXLEN];

        scanf( "%s", expression );

        int top = 0;
        unsigned j;

        for( j = 0; expression[j] != '\0'; j++ ){
            pilha[top++] = expression[j];
            if( top > 1 && ( ( pilha[top-2] == '[' && pilha[top-1] == ']' ) || ( pilha[top-2] == '{' && pilha[top-1] == '}' ) || ( pilha[top-2] == '(' && pilha[top-1] == ')' ) ) ){
                top -= 2;
            }
        }

        if( top == 0 ){
            puts( "S" );
        }
        else{
            puts( "N" );
        }

    }

    return 0;
}
