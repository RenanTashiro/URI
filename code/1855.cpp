#include <bits/stdc++.h>

using namespace std;

int m = 0, n = 0;

void direction( char c )
{
    switch( c )
    {
        case '>': m = 0, n = 1; break;
        case '<': m = 0, n = -1; break;
        case 'v': m = 1; n = 0; break;
        case '^': m = -1; n = 0; break;
    }
}


int main()
{
    ios::sync_with_stdio( false );

    int x, y;

    cin >> x >> y;

    string mapa[y];

    for( int i = 0; i < y; i++ )
        cin >> mapa[i];

    map<pair<int,int>,bool> table;
    int i = 0, j = 0;

    while( table[{i,j}] == false )
    {
        table[{i,j}] = true;

        if( mapa[i][j] != '.' )
            direction( mapa[i][j] );
        if( mapa[i][j] == '*' )
            break;

        i += m;
        j += n;
    }

    if( mapa[i][j] == '*' )
        cout << "*\n";
    else
        cout << "!\n";
}
