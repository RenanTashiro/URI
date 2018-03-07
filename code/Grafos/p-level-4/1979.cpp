/*
Nome:      Salas Separadas
ID:        1979
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1,42 KB
Submissao: 29/10/15 14:41:50
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio( false );

    int N;

    while( cin >> N && N != 0 )
    {
        int id;
        string str;
        map<int,bool> lst1, lst2;
        bool flag = true;

        for( int i = 0; i < N; i++ )
        {
            cin >> id;
            cin.ignore();
            getline( cin, str );

            if( flag )
            {
                istringstream is( str );
                int n;
                vector<int> tmp;
                while( is >> n ) {
                    tmp.push_back(n);
                }

                bool locFlag1 = false, locFlag2 = false;

                for( auto a : tmp ) {
                    if( lst1[a] == true )
                        locFlag1 = true;
                    if( lst2[a] == true )
                        locFlag2 = true;
                }

                if( !locFlag1 ) {
                    lst1[id] = true;
                    for( auto a : tmp ) lst2[a] = true;
                }
                else if( !locFlag2 ) {
                    lst2[id] = true;
                    for( auto a : tmp ) lst1[a] = true;
                }
                else {
                    flag = false;
                }
            }
        }

        if( flag )
            cout << "SIM\n";
        else
            cout << "NAO\n";
    }

    return 0;
}