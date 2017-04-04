#include <cstdio>
#include <list>
using namespace std;

int main()
{
    int N, aux, aux_2;
    list<int> arya_list;

    scanf( "%d", &N );

    while( N-- )
    {
        scanf( "%d", &aux );
        arya_list.push_back( aux );
    }

    int Q, counter = 0;
    bool flag = false;
    char inst;

    scanf( "%d", &Q );

    while( Q-- )
    {
        scanf( " %c", &inst );

        switch( inst )
        {
            case 'R':
                scanf( "%d", &aux );
                arya_list.remove( aux );
                break;
            case 'I':
                scanf( "%d%d", &aux, &aux_2 );
                for( list<int>::iterator it = arya_list.begin(); it != arya_list.end(); it++ )
                {
                    if( *it == aux_2 )
                    {
                        arya_list.insert( ++it, aux ); break;
                    }
                }
                break;
            case 'Q':
                scanf( "%d%d", &aux, &aux_2 );
                for( list<int>::iterator it = arya_list.begin(); it != arya_list.end() || *it != aux_2; it++ )
                {
                    if( flag )
                        counter++;
                    else if( *it == aux )
                        flag = true;
                }
                printf( "%d\n", counter - 1 );
                counter = 0, flag = false; break;
        }
    }
}
