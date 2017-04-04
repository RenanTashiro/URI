#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <list>
#include <cctype>
#define MAXNAME 1000
using namespace std;

typedef struct{
    char nome[MAXNAME];
    int habilidade;
}Futebol;

int compare( const void *a, const void *b )
{
    Futebol cmpA = *( Futebol* )a;
    Futebol cmpB = *( Futebol* )b;
    return( cmpB.habilidade - cmpA.habilidade );
}

bool compare_str( const string& first, const string& second )
{
        unsigned int i = 0;
        while( ( i < first.length() ) && ( i < second.length() ) ){
            if( tolower( first[i] ) < tolower( second[i] ) ) return true;
            else if( tolower( first[i] ) > tolower( second[i] ) ) return false;
            i++;
        }
        return( first.length() < second.length() );
}

int main()
{
    int N, T;

    scanf( "%d%d", &N, &T );

    Futebol jogador[N];

    for( int i = 0; i < N; i++ ){
        scanf( "%s%d", jogador[i].nome, &jogador[i].habilidade );
    }

    qsort( jogador, N, sizeof( Futebol ), compare );

    int index = 0, time = 1;

    list<string>times[T];

    for( int i = 0; i < N; i++ ){
        times[index++%T].push_back( jogador[i].nome );
    }

    for( int i = 0; i < T; i++ ){
        printf( "Time %d\n", time++ );
        times[i].sort( compare_str );
        for( list<string>::iterator it = times[i].begin(); it != times[i].end(); ++it ){
            cout << *it << endl;
        }
        cout << '\n';
    }


    return 0;
}

