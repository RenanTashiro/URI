/*
Nome:      Embaralhando
ID:        1980
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   346 Bytes
Submissao: 27/10/15 17:30:58
*/
#include <stdio.h>
#include <string.h>

int main() {

    char s[20];

    while( scanf( "%s", s ) && !( strlen( s ) == 1 && s[0] == '0' ) ) {

        int i;
        long long perm = 1;

        for( i = 1; i <= strlen( s ); i++ ) {
            perm *= i;
        }

        printf( "%lld\n", perm );
    }

    return 0;
}
