/*
Nome:      Lucro
ID:        1310
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   812 Bytes
Submissao: 03/06/15 15:53:23
*/
#include <stdio.h>
 
int maxProfit( const int *arry, const int cost, size_t length )
{
    int max_so_far = 0, max_ending_here = 0;
    unsigned i;
 
    for( i = 0; i < length; i++ ){
        max_ending_here += arry[i] - cost;
        if( max_ending_here < 0 ){
            max_ending_here = 0;
        }
        else if( max_ending_here > max_so_far ){
            max_so_far = max_ending_here;
        }
    }
 
    return max_so_far;
}
 
int main()
{
    int N, perDayCost;
    unsigned i;
 
    while( scanf( "%d", &N ) != EOF ){
 
        scanf( "%d", &perDayCost );
 
        int revenue[N];
 
        for( i = 0; i < N; i++ ){
            scanf( "%d", &revenue[i] );
        }
 
        printf( "%d\n", maxProfit( revenue, perDayCost, N ) );
    }
 
    return 0;
}