#include <bits/stdc++.h>

using namespace std;

bool pairCompare( const pair<int,int> &firstElement, const pair<int,int> &secondElement ){
    return firstElement.first < secondElement.first;
}

int main()
{
    int N, counter = 0;
    int X, Y;

    scanf( "%d", &N );

    vector< pair<int,int> > coord;

    for( int i = 0; i < N; i++ )
    {
        scanf( "%d%d", &X, &Y );
        coord.push_back( { X, Y } );
    }

    sort( coord.begin(), coord.end(), pairCompare );

    for( vector< pair<int,int> >::iterator it = coord.begin(); it != coord.end(); it++ ) {
        int lower = -100000000, upper = 100000000;
        for( vector< pair<int,int> >::iterator it_y = it+1; it_y != coord.end(); it_y++ ) {
            if( it_y->second > it->second && it_y->second < upper ) {
                upper = it_y->second;
                counter++;
            }
            else if( it_y->second < it->second && it_y->second > lower ) {
                lower = it_y->second;
                counter++;
            }
        }
    }

    cout << counter << "\n";

    return 0;
}
