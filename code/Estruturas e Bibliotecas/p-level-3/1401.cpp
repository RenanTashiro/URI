/*
Nome:      Gerando Permutações Ordenadas Rapidamente
ID:        1401
Resposta:  Accepted
Linguagem: C++
Tempo:     0.056s
Tamanho:   424 Bytes
Submissao: 13/10/15 20:15:48
*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    //ios::sync_with_stdio( false );
 
    int N;
 
    cin >> N;
 
    while( N-- )
    {
        string str;
 
        cin >> str;
 
        sort( str.begin(), str.end() );
 
        do {
            cout << str << '\n';
        } while( next_permutation( str.begin(), str.end() ) );
 
        cout << '\n';
    }
 
    return 0;
}