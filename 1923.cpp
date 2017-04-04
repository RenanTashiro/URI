#include <bits/stdc++.h>

using namespace std;

list<int> *relationship;
int visited[1<<7], counter = 0;

void DFS( int ori, int maxLvl )
{
    queue<pair<int,int>> fi;
    fi.push( { ori, 0 } );

    while( !fi.empty() ) {
        pair<int,int> act = fi.front();
        fi.pop();
        for( auto i : relationship[get<0>( act )] ) {
            if( !visited[i] && get<1>( act ) < maxLvl ) {
                visited[i] = 1;
                fi.push( { i, get<1>( act ) + 1 } );
                counter++;
            }
        }
    }

}

int main()
{
    ios::sync_with_stdio( false );

    int S, T, diff = 1;
    map<string,int> id;

    cin >> S >> T;

    relationship = new list<int>[S*4];

    memset( visited, 0, sizeof( visited ) );

    for( int i = 0; i < S; i++ )
    {
        string n1, n2;
        cin >> n1 >> n2;

        if( id[n1] == 0 )
            id[n1] = diff++;
        if( id[n2] == 0 )
            id[n2] = diff++;

        relationship[ id[n1] ].push_back( id[n2] );
        relationship[ id[n2] ].push_back( id[n1] );
    }

    visited[ id[ "Rerisson" ] ] = 1;
    DFS( id[ "Rerisson" ], T );
    visited[ id[ "Rerisson" ] ] = 0;

    cout << counter << "\n";

    for( map<string,int>::iterator it = id.begin(); it != id.end(); it++ ) {
        if( visited[it->second] == 1 )
            cout << it->first << "\n";
    }

    return 0;
}
