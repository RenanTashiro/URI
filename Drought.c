#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct consum{
    long int people;
    long int m3;
};

typedef struct consum Consum;

int compare( const void * a, const void *b )
{
    Consum *consumA = ( Consum *)a;
    Consum *consumB = ( Consum *)b;

    return( consumB->m3 < consumA->m3 );
}

int main( void )
{
    int N, index_city = 1;
    long t_people = 0, t_m3 = 0;
    double m_consum;
    unsigned i;

    while( scanf( "%d", &N ) && N != 0 ){

        if( index_city > 1 ){
            puts( "" );
        }

        Consum city[N];

        for( i = 0; i < N; i++ ){
            scanf( "%ld%ld", &city[i].people, &city[i].m3 );
            t_people += city[i].people;
            t_m3 += city[i].m3;
            city[i].m3 /= city[i].people;
        }

        qsort( city, N, sizeof( Consum ), compare );

        printf( "%s%d%c\n", "Cidade# ", index_city, ':' );

        for( i = 0; i < N; i++ ){

            if( city[i+1].m3 == city[i].m3 ){
                city[i+1].people += city[i].people;
            }
            else{
                printf( "%ld%c%ld", city[i].people, '-', city[i].m3  );
                if( i <  N - 1 ){
                    printf( "%c", ' ' );
                }
            }
        }

        m_consum = ( double ) t_m3 / t_people;
        double int_part;
        int frac_part = ( int )( modf ( ( double ) m_consum, &int_part ) * 100 );

        if(frac_part < 10)
            printf("\nConsumo medio: %d.0%d m3.\n", (int)int_part, (int)frac_part);
        else
            printf("\nConsumo medio: %d.%d m3.\n", (int)int_part, (int)frac_part);

        index_city++;
        t_people = t_m3 = 0;
    }

    return 0;
}
