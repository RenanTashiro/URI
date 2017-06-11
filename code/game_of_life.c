#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define DIM 5
#define N_INILIFE 10

typedef struct{
    int i, j;
}Queue;

bool** create_world( const int dim )
{
    bool** world = ( bool** ) calloc( dim, sizeof( bool* ) );
    unsigned i;
    for( i = 0; i < dim; i++ ) world[i] = ( bool* ) calloc( dim, sizeof( bool ) * dim );
    return world;
}

void destroy_world( bool** world, const int dim )
{
    unsigned i;
    for( i = 0; i < dim; i++ ) free( world[i] );
    free( world );
}

void start_life_randomly( bool** world, size_t dim, int number_of_organism )
{
    srand( time( NULL ) );
    int i, j;
    while( number_of_organism-- ){
        do{
            i = rand() % dim;
            j = rand() % dim;
        }while( world[i][j] == 1 );
        world[i][j] = 1;
    }
}

void check_neighborhood( bool** world, const int i, const int j, Queue _of_death )
{

}

int main()
{
    bool** world = create_world( DIM );
    unsigned i, j;

    for( i = 0; i < DIM; i++ ){
        for( j = 0; j < DIM; j++ ) printf( "%d ", world[i][j] );
        puts( "" );
    }

    start_life_randomly( world, DIM, N_INILIFE );
    puts( "\n" );

    for( i = 0; i < DIM; i++ ){
        for( j = 0; j < DIM; j++ ) printf( "%d ", world[i][j] );
        puts( "" );
    }


    destroy_world( world, DIM );

    return 0;
}
