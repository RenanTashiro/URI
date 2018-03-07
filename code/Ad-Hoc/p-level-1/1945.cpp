/*
Nome:      Simulador
ID:        1945
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.008s
Tamanho:   914 Bytes
Submissao: 21/10/15 12:21:49
*/
#include <bits/stdc++.h>

using namespace std;

bool is_digit( const string &str )
{
    return str.find_first_not_of( "0123456789" ) == string::npos;
}

int toInt( string &str )
{
    int num = 0, len = ( int ) str.size();

    for( int i = 1; i <= len; i++ ) {
        num += ( str[i-1] - 48 ) * pow( 10, len - i );
    }

    return num;
}

int main()
{
    ios::sync_with_stdio( false );

    string command, first;
    map<string,int> var;

    while( getline( cin, command ) )
    {
        istringstream iss( command );
        vector<string> tokens{ istream_iterator<string>{iss}, istream_iterator<string>{} };
        first = tokens[0];

        for( vector<string>::iterator it = tokens.begin()+2; it != tokens.end(); ++it ) {
            var[first] += is_digit( *it ) ? toInt( *it ) : var[*it];
        }
    }

    cout << var[first] << "\n";

    return 0;
}
