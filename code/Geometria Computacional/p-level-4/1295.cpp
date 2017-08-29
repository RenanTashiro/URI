/*
Nome:      Problema dos Pares Mais Próximos
ID:        1295
Resposta:  Accepted
Linguagem: C++
Tempo:     1.152s
Tamanho:   1,85 KB
Submissao: 03/10/15 17:07:38
*/
#include <bits/stdc++.h>

using namespace std;

struct Point {
    double x, y;
};

typedef vector<Point> Points;

double closestStrip( Points strip, double d = numeric_limits<double>::max() )
{
    auto Min = d;

    for( auto i = strip.begin(); i != strip.end(); i++ )
        for( auto j = i + 1; j != strip.end() && j->y - i->y < Min; j++ )
            Min = min( Min, hypot( i->x - j->x, i->y - j->y ) );
    return Min;
}

double closestSorted( Points px, Points py )
{
    if( px.size() <= 3 )
        return closestStrip( px );

    auto mid = px.size() / 2;
    Points pyl, pyr;

    for( auto p : py ) {
        if( p.x <= px[mid].x ) pyl.push_back( p );
        else pyr.push_back( p );
    }

    Points pxl = Points(px.begin(), px.begin() + mid);
	Points pxr = Points(px.begin() + mid + 1, px.end());

	auto dl = closestSorted( pxl, pyl );
	auto dr = closestSorted( pxr, pyr );
	auto dlr = min( dl, dr );

	Points strip;

	for( auto p : py )
        if( p.x - px[mid].x < dlr ) strip.push_back( p );

    return min( dlr, closestStrip( strip, dlr ) );
}

double closet( Points p )
{
    Points px = p, py = p;

    sort( px.begin(), px.end(), []( Point p1, Point p2 ) { return p1.x < p2.x; } );
    sort( py.begin(), py.end(), []( Point p1, Point p2 ) { return p1.y < p2.y; } );

    return closestSorted( px, py );
}

int main()
{
    ios::sync_with_stdio( false );

    int N;

    while( cin >> N && N != 0 )
    {
        Points point;
        Point myPoint;

        for( int i = 0; i < N; i++ ) {
            cin >> myPoint.x >> myPoint.y;
            point.push_back( myPoint );
        }

        double ans = closet( point );

        if( ans >= 10000 )
            cout << "INFINITY\n";
        else
            cout << fixed << setprecision( 4 ) << ans << "\n";
    }

    return 0;
}
