#include <bits/stdc++.h>

#define CONST 0.69282032302

using namespace std;

int main()
{
    ios::sync_with_stdio( false );

    int side;

    while( cin >> side ) {
        cout << fixed << setprecision( 2 ) << side * side * CONST << "\n";
    }

    return 0;
}
