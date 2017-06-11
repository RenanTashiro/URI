#include <stdio.h>

struct productPrice{
    int index;
    float price;
};

typedef struct productPrice ProductPrice;

int greatestPrice( const int*, ProductPrice*, size_t, float );

int main()
{
    int M, N;

    while( scanf( "%d%d", &M, &N ) && M != 0 ){

        int product_list[M];
        unsigned i;

        for( i = 0; i < M; i++ ){
            scanf( "%d", &product_list[i] );
        }

        ProductPrice list[N];

        for( i = 0; i < N; i++ ){
            scanf( "%d%f", &list[i].index, &list[i].price );
        }


    }

    return 0;
}

int greatestPrice( const int *index, ProductPrice *list, size_t level, float max_so_far )
{
    float max_individual_product[ sizeof( index ) / sizeof( int )] = {0.0};
    unsigned i;

    for( i = 0; i < ( sizeof( list ) / sizeof( ProductPrice ) ); i++ ){
        if( index[level+1] == list[i].index && max_individual_product[level] > 0.0 ){
            level++;
        }
        else if( index[level] == list[i].index && list[i].index > max_individual_product[level] ){
            max_individual_product[level] = list[i].index;
        }
        else if( level - 1 > 0 && index[level-1] == list[i].index
                && list[i].index > max_individual_product[level-1] ){
            ProductPrice *indexPtr = &list[i];
            greatestPrice( index, indexPtr, level, max_so_far );
        }
    }
}
