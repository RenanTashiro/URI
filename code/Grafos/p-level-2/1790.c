/*
Nome:      Detectando Pontes
ID:        1790
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   2,13 KB
Submissao: 08/07/15 18:07:52
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Vertex int

struct bridge{
    int X, Y;
};

struct graph{
    int V;
    int A;
    int **adj;
};

typedef struct graph *Graph;
typedef struct bridge Bridge;

Graph GRAPHinit( int V );
void GRAPHinsert( Graph G, Vertex v, Vertex w );
int **MATRIXinit( int V );
int GRAPHreach( Graph G, Vertex s, Vertex t, int *arr );
void reachR( Graph G, Vertex v, int *arr, int origem, int dest );

int main()
{
    int C, P;
    unsigned i;

    while( scanf( "%d%d", &C, &P ) != EOF ){

        Graph G = GRAPHinit( C );
        G->adj = MATRIXinit( C );

        Bridge bridge[P];

        for( i = 0; i < P; i++ ){
            scanf( "%d%d", &bridge[i].X, &bridge[i].Y );
            GRAPHinsert( G, bridge[i].X - 1, bridge[i].Y - 1 );
        }

        int counter = 0, arr[C];

        for( i = 0; i < P; i++ ){
            if( !GRAPHreach( G, bridge[i].X - 1, bridge[i].Y - 1, arr ) ){
                counter++;
            }
        }

        printf( "%d\n", counter );
    }

    return 0;
}

Graph GRAPHinit( int V )
{
    Graph G = malloc( sizeof *G );
    G->V = V;
    G->A = 0;
    G->adj = MATRIXinit( V );
    return G;
}

int **MATRIXinit( int V )
{
    Vertex i;
    int **m = malloc( V * sizeof( int* ) );
    for( i = 0; i < V; i++ )
        m[i] = calloc( V, sizeof( int ) );
    return m;
}

void GRAPHinsert( Graph G, Vertex v, Vertex w )
{
    if( G->adj[v][w] == 0){
        G->adj[v][w] = 1;
        G->A++;
    }
    if( G->adj[w][v] == 0 ){
        G->adj[w][v] = 1;
        G->A++;
    }
}

int GRAPHreach( Graph G, Vertex s, Vertex t, int *arr )
{
    Vertex v;
    for( v = 0; v < G->V; v++ )
        arr[v] = 0;
    reachR( G, s, arr, s, t );
    if( arr[t] == 0 ) return 0;
    else return 1;
}

void reachR( Graph G, Vertex v, int *arr, int origem, int dest )
{
    Vertex w;
    arr[v] = 1;
    for( w = 0; w < G->V; w++ ){
        if( v == origem && w == dest ) continue;
        if( G->adj[v][w] == 1 && arr[w] == 0 ){
            reachR( G, w, arr, origem, dest );
        }
    }
}