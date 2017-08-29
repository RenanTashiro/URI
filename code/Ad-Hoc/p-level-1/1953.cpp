/*
Nome:      Roberto e a Sala Desenfreada
ID:        1953
Resposta:  Accepted
Linguagem: C++
Tempo:     0.060s
Tamanho:   639 Bytes
Submissao: 08/11/15 18:46:39
*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio( false );
     
    int n;
 
    while( cin >> n )
    {
        string id;
        int v, EPR = 0, EHD = 0;
 
        for( int i = 0; i < n; i++ ) {
            cin >> v >> id;
 
            if( id.compare( "EPR" ) == 0 ) {
                EPR++;
            }
            else if( id.compare( "EHD" ) == 0 ) {
                EHD++;
            }
        }
 
        cout << "EPR: " << EPR << "\n";
        cout << "EHD: " << EHD << "\n";
        cout << "INTRUSOS: " << n - EPR - EHD << "\n";
    }
 
    return 0;
}