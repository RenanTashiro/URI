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
