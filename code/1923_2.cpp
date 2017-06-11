#include <bits/stdc++.h>

using namespace std;

map<string,list<string>> relationship;
set<string> guest;

void BFS( string ini, int maxDist )
{
    queue<pair<string,int>> fil;
    fil.push( { ini, 0 } );
    while( !fil.empty() ) {
        pair<string,int> act = fil.front();
        fil.pop();
        for( auto& x : relationship[get<0>(act)] ) {
            if( guest.find( x ) == guest.end() && get<1>(act) < maxDist ) {
                guest.insert( x );
                fil.push( { x, get<1>(act)+1 } );
            }
        }
    }
}


int main()
{
    ios::sync_with_stdio( false );

    int N, G;

    cin >> N >> G;

    for( int i = 0; i < N; i++ )
    {
        string u, v;
        cin >> u >> v;
        relationship[ u ].push_back( v );
        relationship[ v ].push_back( u );
    }

    BFS( "Rerisson", G );
    guest.erase( "Rerisson" );

    cout << guest.size() << "\n";

    for( auto& x : guest )
        cout << x << "\n";

    return 0;
}
