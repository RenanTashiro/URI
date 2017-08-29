/*
Nome:      Variações
ID:        1632
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   641 Bytes
Submissao: 23/04/15 07:26:18
*/
#include <stdio.h>

int main()
{
    int T, variation = 1;
    char str[27];

    scanf( "%d", &T );

    unsigned i;

    for( i = 0; i < T; i++ ){

        scanf( "%26s", str );

        unsigned j;

        for( j = 0; str[j] != '\0'; j++) {

            switch( str[j] ){

            case 'A': case 'a':
            case 'E': case 'e':
            case 'I': case 'i':
            case 'O': case 'o':
            case 'S': case 's': variation *= 3; break;

            default: variation *= 2;
            }
        }

        printf( "%d\n", variation );
        variation = 1;
    }
    return 0;
}
