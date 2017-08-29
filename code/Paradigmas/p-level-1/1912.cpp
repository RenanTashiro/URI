/*
Nome:      Ajude Seu Madruga
ID:        1912
Resposta:  Accepted
Linguagem: C++
Tempo:     0.316s
Tamanho:   1,18 KB
Submissao: 27/09/15 08:29:35
*/
#include <cstdio>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int N, A;

    while( scanf( "%d%d", &N, &A ) && N != 0 )
    {
        map<int,int> fita;
        int len;

        for( int i = 0; i < N; i++ )
        {
            scanf( "%d", &len );
            fita[len]++;
        }

        int actValue = 0, numElements = 0, pivo = 0;
        double ans = -1.0;

        for( map<int,int>::reverse_iterator it = fita.rbegin(); it != fita.rend(); it++ )
        {
            pivo = numElements * it->first;

            if( A - ( actValue - pivo ) <= 0 )
            {
                ans = ( double )( A - actValue ) * 1.0 / numElements;
                break;
            }

            actValue += it->first * it->second;
            numElements += it->second;
        }

        if( ans == -1.0 )
        {
            if( A > actValue )
                puts( "-.-" );
            else if( A == actValue )
                puts( ":D" );
            else
                printf( "%.4f\n", ( double ) -( A - actValue ) / numElements );
        }
        else
            printf( "%.4f\n", -ans );
    }

    return 0;
}