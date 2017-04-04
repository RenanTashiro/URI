#include <cstdio>
using namespace std;

int main()
{
    int N, C;

    scanf( "%d%d", &N, &C );

    int stock, profit = 0;
    int actStock = 1500, actSell = 0;

    for( int i = 0; i < N; i++ )
    {
        scanf( "%d", &stock );

        if( stock + C < actSell && actStock + C < actSell )
        {
            profit += actSell - ( actStock + C );
            //printf( "N=%d stock=%d C=%d actSell=%d %d\n", i, actStock, C, actSell, profit );
            actStock = stock;
            actSell = 0;
        }
        else if( actStock > stock )
        {
            actStock = stock;
        }
        else if( stock > actSell )
        {
            actSell = stock;
        }

        //printf( "%d=(%d %d %d)**%d\n", i, actStock, actSell, stock, profit );
    }

    if( actStock + C < actSell )
        profit += actSell - ( actStock + C );

    printf( "%d\n", profit );

    return 0;
}
