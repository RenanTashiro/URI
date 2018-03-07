/*
Nome:      Guilherme e Suas Pipas
ID:        1921
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   300 Bytes
Submissao: 20/09/15 09:12:12
*/
#include <cstdio>
using namespace std;

int main()
{
    int N;

    scanf( "%d", &N );

    if( N & 1 )
        printf( "%lld\n", ( long long int ) ( N - 3 ) * ( N / 2 ) + ( N / 2 - 1) );
    else
        printf( "%lld\n", ( long long int ) ( N - 3 ) * ( N / 2 ) );

    return 0;
}
