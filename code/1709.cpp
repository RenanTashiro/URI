#include <cstdio>
using namespace std;

int main()
{
    int P;

    while( scanf( "%d", &P ) != EOF )
    {
        int pos = 1;
        int counter = 0;

        P /= 2;

        do{
            if( pos <= P )
                pos *= 2;
            else
                pos = ( pos - P ) * 2 - 1;
            counter++;
        }while( pos != 1 );

        printf( "%d\n", counter );
    }

    return 0;
}
