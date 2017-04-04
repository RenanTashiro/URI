#include <bits/stdc++.h>

using namespace std;

typedef struct{
    int win, lose;
    int get, receive;
    int id;
}Point;

int compare( const void *first, const void *second )
{
    Point firstP = *( Point* ) first;
    Point secondP = *( Point* ) second;
    if( firstP.win != secondP.win )
        return secondP.win - firstP.win;
    else if( firstP.get / ( firstP.receive != 0 ? firstP.receive : 1 ) != secondP.get / ( secondP.receive != 0 ? secondP.receive : 1 ) )
        return secondP.get / ( secondP.receive != 0 ? secondP.receive : 1 ) - firstP.get / ( firstP.receive != 0 ? firstP.receive : 1 );
    else if( firstP.get != secondP.get )
        return secondP.get - firstP.get;
    return firstP.id > secondP.id;
}

int main()
{
    ios::sync_with_stdio( false );

    int N, instance = 1;

    while( cin >> N && N != 0 )
    {
        if( instance > 1 ) cout << "\n";

        int nPlay = N * ( N - 1 ) / 2;
        Point team[N];

        for( int i = 0; i < N; i++ ) {
            team[i].win = 0; team[i].lose = 0;
            team[i].get = 0; team[i].receive = 0;
            team[i].id = i+1;
        }

        int x = 0, y = 0, z = 0, w = 0;

        for( int i = 0; i < nPlay; i++ ) {
            cin >> x >> y >> z >> w;
            team[x-1].get += y; team[x-1].receive += w;
            team[z-1].get += w; team[z-1].receive += y;
            if( y > w ) {
                team[x-1].win += 2;
                team[z-1].lose++;
            }
            else {
                team[z-1].win += 2;
                team[x-1].lose++;
            }
        }

        qsort( team, N, sizeof( Point ), compare );

        cout << "Instancia " << instance++ << "\n";

        for( int i = 0; i < N; i++ ) {
            cout << ( i != 0 ? " " : "" ) << team[i].id;
        }

        cout << "\n";
    }

    return 0;
}
