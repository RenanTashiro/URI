/*
Nome:      Frase Completa
ID:        1551
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   923 Bytes
Submissao: 26/05/15 08:46:01
*/
#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main()
{
    int N, counter = 0;
    string str;

    cin >> N;

    for( int i = 0; i < N; i++ ){

        cin.ignore();
        getline( cin, str );

        unsigned j;
        int alphaOK[26] = {0};

        for( j = 0; str[j] != '\0'; j++ ){

            if( isalpha(str[j]) && alphaOK[str[j] - 97] == 0 ){
                alphaOK[str[j] - 97] = 1;
                counter++;

                if( counter == 26 ){
                    break;
                }
            }
        }

        if( counter == 26 ){
            printf( "%s\n", "frase completa" );
        }
        else if( counter >= 13 ){
            printf( "%s\n", "frase quase completa" );
        }
        else{
            printf( "%s\n", "frase mal elaborada" );
        }
        counter = 0;
    }
    return 0;
}
