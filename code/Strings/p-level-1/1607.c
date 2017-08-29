/*
Nome:      Avance as Letras
ID:        1607
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   598 Bytes
Submissao: 22/04/15 18:19:53
*/
#include <stdio.h>

int main()
{
    int T, operation = 0;
    char str1[10005];
    char str2[10005];
    unsigned i;

    scanf( "%d", &T );

    for( i = 0; i < T; i++ ){

        scanf( "%10000s%10000s", str1, str2 );

        unsigned j;

        for( j = 0; str1[j] != '\0';j++ ){

            if( str1[j] <= str2[j] ){
                operation += str2[j] - str1[j];
            }
            else{
                operation += 26 - (str1[j] - str2[j]);
            }
        }
        printf( "%d\n", operation );
        operation = 0;
    }
    return 0;
}
