/*
Nome:      Base 32
ID:        1869
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   748 Bytes
Submissao: 11/08/15 13:10:43
*/
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

void decto32( string &buffer, long long unsigned number )
{
    long rest;
    char tmp;

    while( number >= 32 )
    {
        rest = number % 32;
        number /= 32;
        tmp = rest < 10 ? 48 + rest : 55 + rest;
        buffer += tmp;
    }

    tmp = number < 10 ? 48 + number : 55 + number;
    buffer += tmp;
}

int main()
{
    long long unsigned number;

    while( scanf( "%llu", &number ) && number != 0 )
    {
        string b32;
        decto32( b32, number );

        for( int i = b32.size() - 1; i >=0; i-- )
            printf( "%c", b32[i] );

        puts( "" );
    }

    puts( "0" );

    return 0;
}
