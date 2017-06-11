#include <stdio.h>
#include <string.h>

struct market{
    char product[51];
    float price;
};

typedef struct market Mark;

int main()
{
    int N;
    unsigned i;

    scanf( "%d", &N );

    for( i = 0; i < N; i++ ){

        int M;
        unsigned j, k;

        scanf( "%d", &M );
        Mark list[M];

        for( j = 0; j < M; j++ ){
            scanf( "%50s%f", list[j].product, &list[j].price );
        }

        int P, amount;
        float total = 0;
        char product[51];

        scanf( "%d", &P );

        for( j = 0; j < P; j++ ){
            scanf( "%50s%d", product, &amount );

            for( k = 0; k < M; k++ ){
                if( strcmp( product, list[k].product ) == 0 ){
                    total += ( float ) list[k].price * amount;
                    break;
                 }
            }
        }

        printf( "%s%.2f\n", "R$ ", total );
    }

    return 0;
}
