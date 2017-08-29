/*
Nome:      Escultura à Laser
ID:        1107
Resposta:  Accepted
Linguagem: C++
Tempo:     0.012s
Tamanho:   520 Bytes
Submissao: 23/10/15 09:53:41
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio( false );
    
    int A, C;

    while( cin >> A >> C && A != 0 )
    {
        int heigth, prev, times = A;

        cin >> prev;

        for( int i = 1; i < C; i++ ) {
            cin >> heigth;
            if( prev < heigth ) {
                times += heigth - prev;
            }
            prev = heigth;
        }

        times -= prev;

        cout << times << "\n";
    }

    return 0;
}
