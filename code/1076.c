#include <stdio.h>
#define MAXV 55

int main()
{
    int T;

    scanf( "%d", &T );

    while( T-- ){

        int N;
        int V, A;

        scanf( "%d", &N );
        scanf( "%d%d", &V, &A );

        int graph[MAXV][MAXV] = {{0}};

        int counter = 0, v, w;

        while( A-- ){
            scanf( "%d%d", &v, &w );
            if( graph[v][w] == 0 && graph[w][v] == 0 ){
                counter++;
            }
            graph[v][w] = 1;
        }

        printf( "%d\n", counter * 2 );
    }


    return 0;
}
