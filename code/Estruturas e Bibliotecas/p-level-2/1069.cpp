/*
Nome:      Diamantes e Areia
ID:        1069
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.008s
Tamanho:   789 Bytes
Submissao: 25/05/15 10:21:45
*/
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
    int N, counter = 0;
    scanf( "%d ", &N );

    for( int i = 0; i < N; i++ ){

        char c;
        vector<char> diamond;

        while( ( c = getchar() ) && c != '\n' ){
            if( c == '<' || c == '>' ){
                diamond.push_back( c );
            }
        }

        for( unsigned j = 1; j < diamond.size(); j++ ){
            if( diamond[j-1] == '<' && diamond[j] == '>' ){
                counter++;
                diamond.erase( diamond.begin()+j-1 );
                diamond.erase( diamond.begin()+j-1 );
                j = 0;
            }
        }

        cout << counter << endl;
        counter = 0;
    }

    return 0;
}
