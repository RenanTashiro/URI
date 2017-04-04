#include <iostream>
#include <cstdlib>
using namespace std;

struct pipe{
    int len;
    int value;
    double vl;
};

typedef struct pipe Pipe;

int compare( const void * a, const void *b )
{
    Pipe *pA = ( Pipe *)a;
    Pipe *pB = ( Pipe *)b;

    return( pB->vl > pA->vl );
}


int main()
{
    int N, T;
    long long int total = 0;

    cin >> N >> T;

    Pipe product[N];

    for( int i = 0; i < N; i++ ){
        cin >> product[i].len >> product[i].value;
        product[i].vl = ( double ) product[i].value / product[i].len;
    }

    qsort( product, N, sizeof( Pipe ), compare );

    int i, new_total = 0;

    for(  i = 0; product[i].len <= T; i++ ){
        total += ( T / product[i].len ) * product[i].value;
        T %= product[i].len;
    }
    if( T > 0 ){
		T += product[i-1].len;
        new_total = total - product[i-1].value;
        for( ; product[i].len <= T; i++ ){
            new_total += ( T / product[i].len ) * product[i].value;
            T %= product[i].len;
        }
    }

    if( new_total > total ){
        cout << new_total << endl;
    }
    else{
        cout << total << endl;
    }

    return 0;
}
