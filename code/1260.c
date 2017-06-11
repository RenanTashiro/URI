#include <stdio.h>
#include <stdlib.h>

struct tree{
    char species[31];
    long counter;
};

typedef struct tree Tree;

int main()
{
    int N;
    char tmp[31];
    unsigned i;

    scanf( "%d", &N );

    for( i = 0; i < N; i++ ){


        scanf( "%30[^\n]", tmp );
        printf( "%s\n", tmp );
    }

    return 0;
}

