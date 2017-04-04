#include <cstdio>
#include <algorithm>
using namespace std;

int Area = 0;

int area( int height, int length )
{
    if( height > length )
        return length * length;
    return height * height;
}

void alLCombination( int *recOne, int *recTwo )
{
    for( int i = 0; i < 4; i++ )
    {
        if( i != 0 )
        {
            if( !( i & 1 ) )
                swap( recTwo[0], recTwo[1] );
            else
                swap( recOne[0], recTwo[1] );
        }
        int actArea = area( recOne[0] + recTwo[0], recOne[1] + recTwo[1] );
        if( actArea > Area )
            Area = actArea;
    }
}

int main()
{
    int rectangleOne[2], rectangleTwo[2];

    scanf( "%d%d%d%d", &rectangleOne[0], &rectangleOne[1], &rectangleTwo[0], &rectangleTwo[1] );

    alLCombination( rectangleOne, rectangleTwo );

    printf( "%d\n", Area );

    return 0;
}
