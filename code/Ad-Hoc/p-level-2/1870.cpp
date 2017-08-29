/*
Nome:      Ventiladores e Balões
ID:        1870
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   1,43 KB
Submissao: 26/10/15 16:34:26
*/
#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;

int find( int matrix[9][9], ii pos, int column  )
{
    int right = 0, left = 0;
    for( int j = pos.second + 1; j < column; j++ ) {
        if( matrix[pos.first][j] != 0 ) {
            right = matrix[pos.first][j];
            break;
        }
    }
    for( int j = pos.second - 1; j >= 0; j-- ) {
        if( matrix[pos.first][j] != 0 ) {
            left = matrix[pos.first][j];
            break;
        }
    }
    return left - right;
}

int main()
{
    int L, C, P;

    while( cin >> L >> C >> P && L != 0 )
    {
        int matrix[9][9];

        for( int i = 0; i < L; i++ ) {
            for( int j = 0; j < C; j++ ) {
                cin >> matrix[i][j];
            }
        }

        ii pos = {0, P - 1}; // row and column

        for( int i = 0; i <= L; i++ ) {
            if( i == L ) {
                cout << "OUT " << pos.second + 1 << "\n";
                break;
            }

            pos.second += find( matrix, pos, C );

            if( pos.second < 0 )
                pos.second == 0;
            if(pos.second >= C )
                pos.second = C - 1;

            if( matrix[pos.first][pos.second] != 0 ) {
                cout << "BOOM " << pos.first + 1 << " " << pos.second + 1 << "\n";
                break;
            }
            pos.first++;
        }

    }

    return 0;
}