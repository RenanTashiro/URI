#include <stdio.h>
#include <stdlib.h>

#define END(n) n * ( n - 1 ) / 2
#define T puts( "teste" );

typedef struct{
    int pts, p_basket, n_basket, insc, idx;
    double average;
}NBA;

int cmp( const void* a, const void* b )
{
    NBA cmpA = *( NBA* )a;
    NBA cmpB = *( NBA* )b;
    if( cmpB.pts - cmpA.pts ) return( cmpB.pts - cmpA.pts );
    else if( cmpA.pts == cmpB.pts && cmpB.average - cmpA.average )  return( cmpB.average - cmpA.average );
    else if( cmpA.pts == cmpB.pts && cmpA.average == cmpB.average && cmpB.p_basket - cmpA.p_basket ) return( cmpB.p_basket - cmpA.p_basket );
    //else if( cmpA.pts == cmpB.pts && cmpA.average == cmpB.average && cmpA.p_basket == cmpB.p_basket ) return( cmpA.insc > cmpB.insc );
}

int main()
{
    int n, instancia = 1;

    while( scanf( "%d", &n ) && n != 0 ){

        NBA times[n];
        int x, y, z, w;
        unsigned i;

        for( i = 0; i < n; i++ ){
            times[i].pts = times[i].p_basket = times[i].n_basket = times[i].insc = 0;
            times[i].idx = i + 1;
        }

        for( i = 0; i < END(n); i++ ){

            scanf( "%d%d%d%d", &x, &y, &z, &w );

            if( y > w ){
                times[x-1].pts += 2;
                times[z-1].pts++;
            }
            else{
                times[z-1].pts += 2;
                times[x-1].pts++;
            }

            times[x-1].p_basket += y;
            times[x-1].n_basket += w;
            times[x-1].insc++;
            times[z-1].p_basket += w;
            times[z-1].n_basket += y;
            times[z-1].insc++;
        }

        for( i = 0; i < n; i++ ) times[i].average = ( double ) times[i].n_basket != 0 ? times[i].p_basket / times[i].n_basket : times[i].p_basket;

        for( i = 0; i < n; i++ ){
            printf( "%d %lf %d %d %d %d\n", times[i].idx, times[i].average, times[i].pts, times[i].p_basket, times[i].n_basket, times[i].insc );
        }

        qsort( times, n, sizeof( NBA ), cmp );

        if( instancia > 1 ) puts( "" );
        printf( "Instancia %d\n", instancia++ );

        for( i = 0; i < n; i++ ){
            printf( "%d ", times[i].idx );
        }

        puts( "" );
    }

    return 0;
}
