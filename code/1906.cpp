#include <bits/stdc++.h>

using namespace std;

int ans = 0;
map<int,int> table;

bool findPass( int Max, int collatz )
{
    vector<int> reg;
    int width = 0;
    bool flag = false;

    while( collatz != 1 ) {
        reg.push_back( collatz );
        width++;

        if( collatz & 1 )
            collatz = collatz * 3 + 1;
        else
            collatz /= 2;

        if( collatz > Max || table[collatz] > 0 ) {
            flag = true;
            for( size_t i = 0; i < reg.size(); i++ ) {
                table[ reg[i] ] = width--;
            }
            break;
        }
    }

    if( !flag ) {
        for( size_t i = 0; i < reg.size(); i++ ) {
            table[ reg[i] ] = -1;
        }
    }

    return flag;
}


int main()
{
    int N, K;

    cin >> N >> K;

    for( int i = 1; i <= N; i++ ) {
        int info = table[i];

        if( info == -1 || ( info != 0 && info >= K ) ) {
            ans++;
        }
        if( info == 0 ) {
            if ( !findPass( N, i ) || ( table[i] >= K ) )
                ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}
