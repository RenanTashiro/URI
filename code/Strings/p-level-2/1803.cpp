/*
Nome:      Matring
ID:        1803
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   757 Bytes
Submissao: 28/05/15 18:01:39
*/
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    int len;
    string number[4];
    string strF, strL, strM;

    for( int i = 0; i < 4; i++ ){
        cin >> number[i];
        len = number[i].size();
        strF += number[i][0];
        strL += number[i][len - 1];
    }

    int F, L, M;
    stringstream s( strF );
    s >> F;
    stringstream l( strL );
    l >> L;

    for( int i = 1; i < len - 1; i++ ){
        for( int j = 0; j < 4; j++ ){
            strM += number[j][i];
        }
        stringstream m( strM );
        m >> M;
        printf( "%c", ( F * M + L ) % 257 );
        strM.clear();
    }

    cout << endl;

    return 0;
}
