/*
Nome:      Praça do Retângulo
ID:        1938
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.028s
Tamanho:   1,12 KB
Submissao: 04/10/15 16:55:19
*/
#include <bits/stdc++.h>
 
using namespace std;
 
bool pairCompare( const pair<int,int> &firstElement, const pair<int,int> &secondElement ){
    return firstElement.first < secondElement.first;
}
 
int main()
{
    ios::sync_with_stdio( false );
    
    int N, counter = 0;
    int X, Y;
 
    cin >> N;
 
    vector< pair<int,int> > coord;
 
    for( int i = 0; i < N; i++ )
    {
        cin >> X >> Y;
        coord.push_back( { X, Y } );
    }
 
    sort( coord.begin(), coord.end(), pairCompare );
 
    for( vector< pair<int,int> >::iterator it = coord.begin(); it != coord.end(); it++ ) {
        int lower = -100000000, upper = 100000000;
        for( vector< pair<int,int> >::iterator it_y = it+1; it_y != coord.end(); it_y++ ) {
            if( it_y->second > it->second && it_y->second < upper ) {
                upper = it_y->second;
                counter++;
            }
            else if( it_y->second < it->second && it_y->second > lower ) {
                lower = it_y->second;
                counter++;
            }
        }
    }
 
    cout << counter << "\n";
 
    return 0;
}