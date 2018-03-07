/*
Nome:      Guga e a String
ID:        1781
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.592s
Tamanho:   2,22 KB
Submissao: 26/05/15 07:55:37
*/
#include <iostream>
#include <stdio.h>
#include <cctype>
#include <vector>
#include <string>
#define VOWEL 1
#define CONSONANT 0

int isvowel( const char c )
{
    if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ){
        return 1;
    }
    else{
        return 0;
    }
}

using namespace std;

int main()
{
    int N;
    vector<char> vowel;
    vector<char> consonant;
    string c;

    cin >> N;

    for( int i = 0; i < N; i++ ){

        int index[10005] = {0};
        int counter = 0;
        char c;
        cin.ignore();

        while( ( c = getchar() ) && c != '\n' ){
            if( isvowel( c ) ){
                index[counter] = VOWEL;
                vowel.push_back( c );
            }
            else{
                consonant.push_back( c );
            }
            counter++;
        }

        cout << "Caso #"<< i + 1 <<":\n";

        int T, instruction, value;
        int vowel_index = 0, consonant_index = 0;
        int consonant_size = consonant.size(), vowel_size = vowel.size();

        if( consonant_size == 0 ){ consonant_size++; }
        if( vowel_size == 0 ){ vowel_size++; }

        cin >> T;

        for( int j = 0; j < T; j++ ){

            cin >> instruction;

            if( instruction != 2 ){
                cin >> value;
                if( instruction == 0 ){
                    vowel_index += value;
                }
                else{
                    consonant_index += value;
                }
            }
            else{
                int temp_c = consonant_size - (consonant_index % consonant_size );
                int temp_v = vowel_size - ( vowel_index % vowel_size );

                for( int k = 0; k < counter; k++ ){
                    if( index[k] == CONSONANT ){
                        cout << consonant[temp_c%consonant_size];
                        temp_c++;
                    }
                    else{
                        cout << vowel[temp_v%vowel_size];
                        temp_v++;
                    }
                }
                cout << endl;
            }
        }

        vowel.clear();
        consonant.clear();

    }

    return 0;
}
