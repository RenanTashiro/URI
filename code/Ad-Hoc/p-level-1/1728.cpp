/*
Nome:      Difícil de Acreditar, Mas é Verdade!
ID:        1728
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   915 Bytes
Submissao: 18/06/15 16:05:35
*/
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdio>

using namespace std;

#define MAX 8

int r_strtoi( const char *str )
{
    string aux;

    for( int i = strlen( str ) - 1; i >= 0; i-- ){
        aux += str[i];
    }

    int result;
    stringstream(aux) >> result;
    return result;
}

int main()
{
    char number_one[MAX], number_two[MAX], result[MAX], op;

    while( scanf( " %7[^+]%c%7[^=]%c%7s", number_one, &op, number_two, &op, result ) ){

        if( strcmp( number_one, "0" ) == 0 && strcmp( number_two, "0" ) == 0 && strcmp( result, "0" ) == 0 ){
            cout << "True\n";
            break;
        }

        if( r_strtoi( number_one ) + r_strtoi( number_two ) == r_strtoi( result ) ){
            cout << "True\n";
        }
        else{
            cout << "False\n";
        }
    }

    return 0;
}
