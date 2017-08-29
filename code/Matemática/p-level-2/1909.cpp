/*
Nome:      Ajude Kiko
ID:        1909
Resposta:  Accepted
Linguagem: C++
Tempo:     0.004s
Tamanho:   1,76 KB
Submissao: 14/09/15 10:21:34
*/
#include <iostream>
#include <numeric>
#include <cstring>

int tempo_das_bolas[100005];

int gcd( int a, int b )
{
    for(;;)
    {
        if( a == 0 ) return b;
        b %= a;
        if( b == 0 ) return a;
        a %= b;
    }
}

int lcm( int a, int b )
{
    int temp = gcd( a, b );

    return temp ? ( a / temp * b ) : 0;
}

int multiple_mmc( long* arr, int tam )
{
    int actual_mmc = lcm( arr[0], arr[1] );

    for( int i = 2; i < tam; i++ )
        actual_mmc = lcm( actual_mmc, arr[i] );

    return actual_mmc;
}

void acha_divisores( int T, int tam, long* tempo_de_quique )
{
    for( int i = 2; i <= T; i++ )
    {
        if( T % i == 0 && tempo_das_bolas[i] == 0 )
        {
            tempo_de_quique[tam-1] = i;

            int result = multiple_mmc( tempo_de_quique, tam );

            if( result == T )
                return;
        }
    }
}

int main()
{
    int N, T;

    while( std::cin >> N >> T && N != 0 )
    {
        long tempo_de_quique[N+1];
        bool existe = true;

        tempo_de_quique[N] = -1;
        memset( tempo_das_bolas, 0, sizeof( tempo_das_bolas ) );

        for( int i = 0; i < N; i++ )
        {
            std::cin >> tempo_de_quique[i];
            int tmp = tempo_de_quique[i];
            tempo_das_bolas[tmp] = 1;
            if( T % tempo_de_quique[i] != 0  )
                existe = false;
        }

        if( existe )
        {
            acha_divisores( T, N + 1, tempo_de_quique );
            if( tempo_de_quique[N] != -1 )
                std::cout << tempo_de_quique[N] << std::endl;
            else
                std::cout << "impossivel\n";
        }
        else
        {
            std::cout << "impossivel\n";
        }
    }
}