/*
Nome:      Quebra-cabeça
ID:        1934
Resposta:  Accepted
Linguagem: C++
Tempo:     0.100s
Tamanho:   2,81 KB
Submissao: 20/09/15 09:45:07
*/
#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

#define MAX_VARIABLE_VALUE 1500000

/*template< int row, int column >
void travelsRow( string arr[row][column] );*/

int main()
{
    int L, C;

    scanf( "%d%d", &L, &C );

    map<string,int> table;
    string var[L][C];
    int rowSum[L], columnSum[C];

    for( int i = 0; i < L; i++ )
    {
        for( int j = 0; j < C; j++ )
        {
            cin >> var[i][j];
            table[ var[i][j] ] = MAX_VARIABLE_VALUE;
        }
        scanf( "%d", &rowSum[i] );
    }

    for( int i = 0; i < C; i++ )
        scanf( "%d", &columnSum[i] );

    size_t counter = 0;

    while( counter < table.size() )
    {
        // Check Row
        for( int i = 0; i < L; i++ )
        {
            string actVar;

            for( int j = 0; j < C; j++ )
                if( table[ var[i][j] ] == MAX_VARIABLE_VALUE )
                {
                    actVar = var[i][j];
                    break;
                }

            if( actVar.size() != 0 )
            {
                int knownValue = 0, numVar = 0;
                int j;

                for( j = 0; j < C; j++ )
                {
                    if( var[i][j] != actVar && table[ var[i][j] ] == MAX_VARIABLE_VALUE )
                        break;
                    else if( table[ var[i][j] ] != MAX_VARIABLE_VALUE )
                        knownValue += table[ var[i][j] ];
                    else
                        numVar++;
                }

                if( j == C )
                    table[ actVar ] = ( rowSum[i] - knownValue ) / numVar, counter++;
            }
        }
        //Check Column
        for( int j = 0; j < C; j++ )
        {
            string actVar;

            for( int i = 0; i < L; i++ )
                if( table[ var[i][j] ] == MAX_VARIABLE_VALUE )
                {
                    actVar = var[i][j];
                    break;
                }

            if( actVar.size() != 0 )
            {
                int knownValue = 0, numVar = 0;
                int i;

                for( i = 0; i < L; i++ )
                {
                    if( var[i][j] != actVar && table[ var[i][j] ] == MAX_VARIABLE_VALUE )
                        break;
                    else if( table[ var[i][j] ] != MAX_VARIABLE_VALUE )
                        knownValue += table[ var[i][j] ];
                    else
                        numVar++;
                }

                if( i == L )
                    table[ actVar ] = ( columnSum[j] - knownValue ) / numVar, counter++;
            }
        }
    }


    for( map<string,int>::iterator it = table.begin(); it != table.end(); it++ )
        cout << it->first << ' ' << it->second << '\n';

    return 0;
}
