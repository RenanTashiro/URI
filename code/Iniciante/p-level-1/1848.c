/*
Nome:      Corvo Contador
ID:        1848
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   651 Bytes
Submissao: 09/08/15 16:59:44
*/
#include <stdio.h>
#include <string.h>
#define MAXS 10

int decoder( char* eye )
{
    int value = 0;

    if( eye[0] == '*' )
        value += 4;
    if( eye[1] == '*' )
        value += 2;
    if( eye[2] == '*' )
        value += 1;

    return value;
}

int main()
{
    char eye[MAXS];
    int sum = 0, counter = 0;

    while( counter < 3 )
    {
        scanf( " %[^\n]", eye );

        if( strcmp( eye, "caw caw" ) == 0 )
        {
            counter++;
            printf( "%d\n", sum );
            sum = 0;
        }
        else{
            sum += decoder( eye );
        }
    }

    return 0;
}
