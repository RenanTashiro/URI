/*
Nome:      Torneios em Sequência
ID:        1878
Resposta:  Accepted
Linguagem: C++
Tempo:     0.004s
Tamanho:   1,1 KB
Submissao: 24/09/15 18:23:48
*/
#include <cstdio>
#include <map>
using namespace std;

map<int,bool> table;
bool flag = false;

void genPermutation( int *arr, int M )
{
    int sum;
    int i, j, k;

    for( i = 1; i <= M; i++ )
        for( j = 1; j <= M; j++ )
            for( k = 1; k <= M; k++ )
                if( i != j && j != k )
                {
                    sum = arr[0] * i + arr[1] * j + arr[2] * k;
                    if( table[sum] == false )
                        table[sum] = true;
                    else
                    {
                        flag = true;
                        goto fim;
                    }
                }
    fim:
    return;
}

int main()
{
    int N, M;
    int i;

    while( scanf( "%d%d", &N, &M ) != EOF )
    {
        int coefficients[N];

        for( i = 0; i < N; i++ )
            scanf( "%d", &coefficients[i] );

        table.clear();
        flag = false;
        genPermutation( coefficients, M );

        if( !flag )
            puts( "Lucky Denis!" );
        else
            puts( "Try again later, Denis..." );
    }
}
