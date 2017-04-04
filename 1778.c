#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QUEUE int
#define GRAPH int
#define EMPTY -1
#define INF 2147483600

GRAPH** create_graph( size_t k );
void set_vertice_dmg( GRAPH** adj, size_t size, int pos, int atck, int alc, int act_pos, int* visited, int* v_dmg );
int* dijkstra( GRAPH** adj, const int ini, size_t size, int* dmg );

int main()
{
    int T, caso = 1;

    scanf( "%d", &T );

    while( T-- )
    {
        int N, M, F; ///Numero de Vertices, Arestas e a posicao
        unsigned i;  ///do castelo, respectivamente

        scanf( "%d%d%d", &N, &M, &F );

        GRAPH** adj = create_graph( N + 1 ); ///Matrz Adjascencia
        int u, v;

        for( i = 0; i < M; i++ )
        {
            scanf( "%d%d", &u, &v );
            adj[u][v] = 1;
            adj[v][u] = 1;
        }

        int P; ///Numero de Torres
        int V, A, C; ///Posição, Ataque, Alcance
        int visited[N+1], v_dmg[N+1];
        memset( v_dmg, 0, sizeof( v_dmg ) );

        scanf( "%d", &P );

        for( i = 0; i < P; i++ )
        {
            scanf( "%d%d%d", &V, &A, &C );
            memset( visited, 0, sizeof( visited ) );
            visited[V] = 1;
            set_vertice_dmg( adj, N + 1, V, A, C, 1, visited, v_dmg );
        }

        int* peso = dijkstra( adj, F, N, v_dmg );
        //*for( i = 1; i <= N; i++ ) printf( "%d\n", peso[i] );

        int Q; ///Numero de Monstros
        int sobreviventes = 0;

        scanf( "%d", &Q );

        while( Q-- )
        {
            int K, H;
            scanf( "%d%d", &K, &H );
            if( peso[K] < H )
                sobreviventes++;
        }

        printf( "Caso #%d: %d\n", caso++, sobreviventes );
    }

    return 0;
}

GRAPH** create_graph( size_t k )
{
    GRAPH** matrix = ( int** ) malloc( sizeof( int* ) * k );
    unsigned i;
    for( i = 0; i < k; i++ )
        matrix[i] = ( int* ) calloc( k, sizeof( int ) );
    return matrix;
}

void set_vertice_dmg( GRAPH** adj, size_t size, int pos, int atck, int alc, int act_pos, int* visited, int* v_dmg )
{
    unsigned i;

    for( i = 1; i <= size; i++ )
    {
        if( adj[pos][i] == 1 && visited[i] == 0 )
        {
            v_dmg[i] += atck;
            visited[i] = 1;
            if( act_pos < alc  )
                set_vertice_dmg( adj, size, i, atck, alc, act_pos + 1, visited, v_dmg );
        }
    }
}

int* dijkstra( GRAPH** adj, const int ini, size_t size, int* dmg )
{
    QUEUE* will_visit = calloc( size*2, sizeof( int ) );
    QUEUE* weigth = malloc( sizeof( int ) * ( size + 1 ) );
    QUEUE begin = 0, end = 0;
    unsigned i;

    for( i = 0; i <= size; i++ ) weigth[i] = INF;

    int* visited = calloc( size + 1, sizeof( int ) );
    visited[ini] = 1, weigth[ini] = 0, will_visit[end++] = ini;

    while( begin < end )
    {
        int src = will_visit[begin++];

        for( i = 1; i <= size; i++ )
        {
            if( adj[src][i] != 0 )
            {
                if( weigth[src] + dmg[i] < weigth[i] )
                    weigth[i] = weigth[src] + dmg[i];
                if( visited[i] == 0 )
                {
                    will_visit[end++] = i;
                    visited[i] = 1;
                }
            }
        }
    }

    return weigth;
}
