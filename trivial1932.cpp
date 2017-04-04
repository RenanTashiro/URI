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

        if( stock + C < actSell )
        {
            profit += actSell - ( actStock + C );
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

        //printf( "(%d %d %d)\n", actStock, actSell, stock );
    }

    if( actStock + C < actSell )
        profit += actSell - ( actStock + C );

    printf( "%d\n", profit );

    return 0;
}
