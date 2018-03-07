/*
Nome:      O Fantástico Jaspion
ID:        1449
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1,4 KB
Submissao: 16/07/15 11:07:22
*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <map>
using namespace std;

int main()
{
    int T;

    cin >> T;

    for( int i = 0; i < T; i++ ){

        int M, N;
        map<string,string> dictionary;
        string str1, str2;

        cin >> M >> N;

        cin.ignore();

        for( int j = 0; j < M; j++ ){
            getline( cin, str1 );
            getline( cin, str2 );
            dictionary[str1] = str2;
        }

        int tst;
        bool flag;
        char line[90];

        for( int j = 0; j < N; j++ ){

            tst = scanf( "%[^\n]", line );
            flag = false;

            if( tst == 0 && getchar() == '\n' ){
                cout << endl;
            }
            else{
                char *pToken;
                pToken = strtok( line, " " );
                while( pToken != NULL ){

                    if( flag ) cout << ' ';
                    else flag = true;

                    if( dictionary.find( pToken ) != dictionary.end() ){
                        cout << dictionary[pToken];
                    }
                    else{
                        cout << pToken;
                    }
                    pToken = strtok( NULL, " " );
                }
                puts( "" );
                getchar();

            }
        }

        puts( "" );
    }
}
