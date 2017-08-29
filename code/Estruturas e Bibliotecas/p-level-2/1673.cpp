/*
Nome:      Codificação Run-length
ID:        1673
Resposta:  Accepted
Linguagem: C++
Tempo:     0.024s
Tamanho:   818 Bytes
Submissao: 16/10/15 08:55:08
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    while( getline( cin, str ) )
    {
        for( string::iterator it = str.begin(); it != str.end(); ) {
            int rep = 1;
            while( rep < 9 && ( it + rep ) != str.end() && *it == *( it +rep ) )
                ++rep;
            if( rep > 1 ) {
                cout << rep << *it;
                it += rep;
            }
            else {
                cout << 1;
                for( ; it != str.end() && ( it + 1 == str.end() || *it != *( it + 1 ) ); ++it ) {
                    cout << *it;
                    if( *it == '1' )
                        cout << *it;
                }
                cout << 1;
            }
        }
        cout << "\n";
    }

    return 0;
}
