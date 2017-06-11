#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    while( cin >> str )
    {
        int len = ( int ) str.size(), counter = 0;
        char prev = str[0];

        for( int i = 0; i < len; i++ )
        {
            if( str[i] == prev ) {
                counter++;
            }
            else if( counter == 1 ) {
                printf( "%d", 1 );
                for( int k = i; k < len && str[k] != prev; k++ ) {
                    if( prev == '1' ) {
                        printf( "%d", 1 );
                    }
                    printf( "%c", prev );
                    prev = str[k];
                }
                printf( "%d", 1 );
            }
            else if( counter != 0 ){
                printf( "%d%c", counter, prev );
                counter = 1;
            }

            if( counter == 9 ) {
                printf( "%d%c", counter, prev );
                counter = 0;
            }
        }

        if( counter != 0 )
            printf( "%d%c\n", counter, prev );
        else
            puts( "" );
    }

    return 0;
}
