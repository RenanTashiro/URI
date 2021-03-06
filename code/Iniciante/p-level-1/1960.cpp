/*
Nome:      Numeração Romana para Números de Página
ID:        1960
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   695 Bytes
Submissao: 28/10/15 06:42:01
*/
#include <bits/stdc++.h>

using namespace std;

struct Roman {
    int value;
    char symbol;
};

void hundred( int n )
{
    string h[] = { "C", "CC", "CCC" , "CD", "D", "DC", "DCC", "DCCC" , "CM" };
    if( n > 0 ) cout << h[n-1];
}

void ten( int n )
{
    string d[] = { "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
    if( n > 0 ) cout << d[n-1];
}

void one( int n )
{
    string o[] = { "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
    if( n > 0 ) cout << o[n-1];
}

int main()
{
    int N;

    scanf( "%d", &N );

    hundred( N / 100 );
    ten( ( N % 100 ) / 10 );
    one( N % 10 );

    puts( "" );

    return 0;
}