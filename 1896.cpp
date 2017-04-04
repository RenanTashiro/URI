#include <bits/stdc++.h>

using namespace std;

struct Cartas {
    int atk, def, hp;
};

bool checkValidInvoker( Cartas cartas[], int atk, int def, int hp )
{
    int length = sizeof( cartas ) / sizeof( Cartas );

    for( int i = 0; i < length; i++ ) {
        for( int i = 0; i < )
    }

    return true;
}

int main()
{
    int N, A, D, H;

    cin >> N >> A >> D >> H;

    Cartas cartas[N];

    for( int i = 0; i < H; i++ ) {
        cin >> cartas[i].atk >> cartas[i].def >> cartas[i].hp;
    }



    return 0;
}
