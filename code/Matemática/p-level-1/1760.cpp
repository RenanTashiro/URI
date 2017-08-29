/*
Nome:      Floco de Neve de Koch
ID:        1760
Resposta:  Accepted
Linguagem: C++
Tempo:     0.036s
Tamanho:   284 Bytes
Submissao: 18/10/15 09:40:59
*/
#include <bits/stdc++.h>

#define CONST 0.69282032302

using namespace std;

int main()
{
    ios::sync_with_stdio( false );

    int side;

    while( cin >> side ) {
        cout << fixed << setprecision( 2 ) << side * side * CONST << "\n";
    }

    return 0;
}
