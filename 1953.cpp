#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio( false );

    int n;

    while( cin >> n )
    {
        char id[100];
        int v, EPR = 0, EHD = 0;

        for( int i = 0; i < n; i++ ) {
            cin >> v >> id;
            if( strcmp( id, "EPR" ) == 0 ) {
                EPR++;
            }
            else if( strcmp( id, "EHD" ) == 0 ) {
                EHD++;
            }
        }

        cout << "EPR: " << EPR << "\n";
        cout << "EHD: " << EHD << "\n";
        cout << "INTRUSOS: " << n - EPR - EHD << "\n";
    }

    return 0;
}
