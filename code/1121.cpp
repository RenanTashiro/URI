#include <bits/stdc++.h>

#define MAXL 105

using namespace std;

char changeOri[] = "NOSL";

pair<int,int> orientation( char c )
{
    switch( c ) {
        case 'N': return {-1,0};
        case 'S': return {1,0};
        case 'L': return {0,1};
        case 'O': return {0,-1};
    }
    return {0,0};
}

void changeOrientation( pair<int,int> &ori, char inst )
{
    if( inst == 'D' ) {
        if( ori.first == 1 )
            ori.first = 0, ori.second = -1;
        else if( ori.first == -1 )
            ori.first = 0, ori.second = 1;
        else if( ori.second == 1 )
            ori.first = 1, ori.second = 0;
        else
            ori.first = -1, ori.second = 0;
    }
    else if( inst == 'E') {
        if( ori.first == 1 )
            ori.first = 0, ori.second = 1;
        else if( ori.first == -1 )
            ori.first = 0, ori.second = -1;
        else if( ori.second == 1 )
            ori.first = -1, ori.second = 0;
        else
            ori.first = 1, ori.second = 0;
    }
}

int main()
{
    ios::sync_with_stdio( false );

    int N, M, S;

    while( cin >> N >> M >> S && N != 0 )
    {
        char arena[MAXL][MAXL];
        pair<int,int> loc;

        for( int i = 0; i < MAXL; i++ )
            memset( arena[i], '#', sizeof( arena[i] ) );

        for( int i = 1; i <= N; i++ ) {
            for( int j = 1; j <= M; j++ ) {
                cin >> arena[i][j];
                if( arena[i][j] != '.' && arena[i][j] != '*' && arena[i][j] != '#' )
                    loc ={i,j};
            }
        }

        map<pair<int,int>,bool> table;
        pair<int,int> ori = orientation( arena[loc.first][loc.second] );
        char inst[S];
        int number_of_fig = 0;

        cin >> inst;

        for( int i = 0; i < S; i++ ) {
            changeOrientation( ori, inst[i] );
            if( inst[i] == 'F' && arena[loc.first+ori.first][loc.second+ori.second] != '#') {
                loc.first += ori.first;
                loc.second += ori.second;
            }
            if( table[loc] == false && arena[loc.first][loc.second] == '*' )
                number_of_fig++, table[loc] = true;
        }

        cout << number_of_fig << "\n";
    }

    return 0;
}
